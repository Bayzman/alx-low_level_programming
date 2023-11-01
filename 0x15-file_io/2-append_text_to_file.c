#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: text to append to the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
		continue;

	wr = write(fd, text_content, count);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
