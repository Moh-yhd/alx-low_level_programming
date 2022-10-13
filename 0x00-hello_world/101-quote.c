#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints a message
 *
 * Return: returns a value of 1
*/
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art isuseful
			\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

