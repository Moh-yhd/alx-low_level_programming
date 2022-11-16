#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - applies a function on each elements of an array
 * @array: is the array containing elements a function is to act on
 * @size: is a pointer to a struct of type size_t
 * @action: is a pointer ot a funtion 
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	if ( array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

