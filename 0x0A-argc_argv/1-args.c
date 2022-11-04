#include <stdio.h>
#include <string.h>

/**
 * main - prints the programs's name
 * @argc: is the number of arguments to the main
 * @argv: an array containg pointers to the argument strings
 * Return: 0 if success
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
