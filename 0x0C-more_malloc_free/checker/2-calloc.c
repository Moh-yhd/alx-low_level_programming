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
	void *p1;
	char *p2;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p2 = malloc(nmemb * size);
	if (p2 == NULL)
	{
		return (NULL);
		free(p2);
	}
	for (i = 0; i < nmemb * size; i++)
		p2[i] = '0';
	p1 = p2;
	return (p1);
}

