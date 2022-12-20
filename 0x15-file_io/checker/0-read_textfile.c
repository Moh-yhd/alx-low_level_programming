#include "main.h"
/**
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t read_letters, written_letters;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	 buf = malloc(sizeof(char) * (letters));
	 if (buf == NULL)
	 {
		 return (0);
	 }

	 read_letters = read(fd, buf, letters);
	 if (read_letters == -1)
		 return (0);
	 
	 written_letters = write(STDOUT_FILENO, buf, read_letters);
	 free(buf);

	 if (written_letters != read_letters)
		 return (0);
	 close(fd);

	 return (written_letters);
}


