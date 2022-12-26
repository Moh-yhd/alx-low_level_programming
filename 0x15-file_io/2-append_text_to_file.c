#include "main.h"

/**
 * append_text_to_file - appends a text a file
 * @filename: is a file which the text is to be appended
 * @text_content: is the text to be appende on the file
 *
 * Return: 1 if success and -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	int w_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		w_bytes = write(fd, text_content, i);
		if (w_bytes != i)
			return (-1);
	}

	close(fd);

	return (1);
}
