#include "main.h"

/**
 * create_file - cretes a file
 * @filename: is the name of the file to be created
 * @text_content: is a pointe to a string
 *
 * Return: 1 if success or -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		n = write(fd, text_content, i);
		if (n != i)
			return (-1);
	}

	close(fd);

	return (1);
}



