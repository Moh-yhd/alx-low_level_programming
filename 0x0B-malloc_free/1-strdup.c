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
	int i;
	char ar;

	if (str == NULL)
	{
		return (NULL);
	}
	ar = malloc(sizeof(str));
	for (i = 0; *str != '\0'; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
	free(ar);
}
