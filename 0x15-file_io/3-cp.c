#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - copies a file's content to another file
 * @ac: is the number of arguments passed to the function
 * @av: is the a pointer to a pointer of strings passes as arguments
 *
 * Return: 1 if success and -1 if failure
 */
int main(int ac, char **av)
{
	int fd1, fd2, a, b;
	ssize_t r_bytes, w_bytes;
	char *err1 = "Usage: cp file_from file_to\n";
	char *err2 = "Error: Can't read from file NAME_OF_THE_FILE\n";
	char *err3 =
	"where NAME_OF_THE_FILE is the first argument passed to your program\n";
	char *err4 = "Error: Can't write to NAME_OF_THE_FILE\n";
	char *err5 = "Error: Can't close fd FD_VALUE\n";
	char buff[1024];

	if (ac < 3)
	{
		write(STDERR_FILENO, err1, 28);
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		write(STDERR_FILENO, err2, 45);
		write(STDERR_FILENO, err3, 68);
		exit(98);
	}
	r_bytes = read(fd1, buff, 1024);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w_bytes = write(fd2, buff, 1024);
	if (fd2 == -1 || r_bytes != w_bytes)
	{
		write(STDERR_FILENO, err4, 40);
		exit(99);
	}
	a = close(fd1);
	b = close(fd2);
	if (a == -1 || b == -1)
	{
		write(STDERR_FILENO, err5, 32);
		exit(100);
	}
	return (1);
}



