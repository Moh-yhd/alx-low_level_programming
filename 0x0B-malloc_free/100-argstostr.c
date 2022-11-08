#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr- concatenates all arguments passed to it with
 * new line after each argument.
 * @ac: is a the number of argument
 * @av: is a pointer to the pointers of the argument strings
 *
 * Return: pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int arglen = 0;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arglen += _len(av[i]);
	}
	ar = malloc(arglen * sizeof(char) + ac + 1);
	if (ar == NULL)
	{
		return (NULL);
		free(ar);
	}
	for (i = 0, k = 0; k < ac * arglen && i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			ar[k] = av[i][j];
			if (j == _len(av[i]) - 1)
			{
				ar[k + 1] = '\n';
				k++;
			}
		}
	}
	return (ar);
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
