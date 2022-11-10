#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a memory using malloc
 * and initializes it with zero.
 * @nmemb: is the number of array elements
 * @size: is zise of each element
 *
 * Return: void pointer to a memory location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		*((char *)(p) + i) = 0;
	return (p);
}

