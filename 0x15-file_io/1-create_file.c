#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the filename
 * @text_content: pointer to the text content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
			continue;

		wr = write(fd, text_content, count);
		if (wr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
