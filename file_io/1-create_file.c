#include "main.h"
/**
 * create_file - creates and writes to a file
 * @filename: the name of the file to write to
 * @text_content: the content to write into the file
 * Description: This function creates a file with the specified filename
 * and writes the given content into it. If the file already exists,
 * it is truncated. The function returns 1 on success, and -1 on failure.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, _write, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;

		_write = write(fd, text_content, i);
		if (_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

