#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies a sting to a memory location and retunlrns the pointer for the memory allocated
 * @str: is a string
 *
 * Return: pointer to a memory location
 */
char *_strdup(char *str)
{
	int i, j, len;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _len(str);
	ar = malloc(len * sizeof(char));
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		ar[j] = str[i];
		j++;
	}
	return (ar);
	free(ar);
}

/**
 * _len - calculates the length of a string
 * @s: is a string
 *
 * Return: length of a string
 */
int _len(char *s)
{
	if (*s)
		return (1 + _len(s + 1));
	else
		return (0);
}
