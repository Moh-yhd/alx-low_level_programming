#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of charachters initialized with a char
 * @size: is the size of the arrya
 * @c: is the initializing charachter
 *
 * Return: pointer to the array or NULL if size is zero or allocation fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * 1);
	i = 0;
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
