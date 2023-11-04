#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd1;
	int fd2;
	ssize_t wr1;
	ssize_t wr2;
	mode_t mode;
	char buffer[BUF];

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		dprintf(ERR, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(ERR, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd2 == -1)
	{
		dprintf(ERR, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		wr1 = read(fd1, buffer, BUF);
		if (wr1 == -1)
		{
			dprintf(ERR, "Error: Can't read from file %s\n",
				argv[1]);
			exit(98);
		}

		if (wr1 > 0)
		{
			wr2 = write(fd2, buffer, wr1);
			if (wr2 == -1)
			{
				dprintf(ERR, "Error: Can't write to %s\n",
					argv[2]);
				exit(99);
			}
		}
	} while (wr1 > 0);

	wr1 = close(fd1);
	if (wr1 == -1)
	{
		dprintf(ERR, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	wr2 = close(fd2);
	if (wr2 == -1)
	{
		dprintf(ERR, "Error: Can't close fd %d\n", fd2);
		exit(99);
	}

	return (0);
}
