#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void err_pr(int a, int b);

/**
 * main - copies a file's content to another file
 * @ac: is the number of arguments passed to the function
 * @av: is the a pointer to a pointer of strings passes as arguments
 *
 * Return: 0 if success and -1 if failure
 */
int main(int ac, char **av)
{
	int fd1, fd2, a, b;
	ssize_t r_bytes, w_bytes;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((r_bytes = read(fd1, buff, 1024)) > 0)
	{
		w_bytes = write(fd2, buff, r_bytes);
		if (r_bytes != w_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		if (r_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
			exit(98);
		}
	}
	a = close(fd1);
	b = close(fd2);
	err_pr(a, b);
	return (0);
}

/**
 * err_pr - prints error message
 * @a: is an integer
 * @b: is an integer
 * Return: nothing
 */

void err_pr(int a, int b)
{
	if (a == -1 || b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
}




