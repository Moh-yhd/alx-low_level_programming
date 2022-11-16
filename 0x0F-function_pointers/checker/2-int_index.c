#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - is a function that searches for an int
 * @array: is a pointer to an array
 * @size: is the number of elements in array arrray
 * @cmp: a pointer to a function that compares
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
