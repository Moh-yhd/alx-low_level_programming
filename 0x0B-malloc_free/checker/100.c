#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: is a string
 * @s2: is a steing
 *
 * Return: pointer to a memory location
 */
int main(int argc, char *argv[])
{
	int i, j;
	int *arglen;
	char **ar;

	arglen = malloc(argc * sizeof(int));
	for (i = 0; i < argc; i++)
	{
		arglen[i] = _len(argv[i]);
	}
	for (i = 0; i < argc; i++)
		printf("%d\n", arglen[i]);
	ar = malloc(argc * sizeof(char *));
	for (i = 0; i < argc; i++)
	{
		ar[i] = malloc(arglen[i] * sizeof(char));
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < arglen[i]; j++)
			ar[i][j] = 'M';
	}
	for (i = 0; i < argc; i++)
		printf("%s\n", ar[i]);

	return (0);
}












/**
 * _len - calculates the length of a string
 * @s: is a string
 *
 * Return: length of a string
 */
int _len(char *s)
{
	if (s == NULL)
		return (0);
	else if (*s)
		return (1 + _len(s + 1));
	else
		return (0);
}
