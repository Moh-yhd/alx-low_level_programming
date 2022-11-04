#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the programs's name
 * @argc: is the number of arguments to the main
 * @argv: an array containg pointers to the argument strings
 * Return: 0 if success
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int mul, arg1, arg2;

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	mul = arg1 * arg2;
	printf("%d\n", mul);
	return (0);
}
