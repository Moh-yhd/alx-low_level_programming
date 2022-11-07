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
	len = sizeof(*str) / sizeof(str[0]);
	ar = malloc(len * sizeof(char));
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		ar[j] = str[i];
		j++;
	}
	return (ar);
	free(ar);
}
