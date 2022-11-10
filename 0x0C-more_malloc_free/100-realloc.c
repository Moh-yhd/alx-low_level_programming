#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: is a pointer allocated with old_size
 * @old_size: is the memory size in bytes for ptr
 * @new_size: is the new memory size to be allocated
 * Return: void pointer if succeed, NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	void *ar;

	if (new_size > old_size)
	{
		ar = malloc(new_size);
		if (ar == NULL)
		{
			return (NULL);
			free(ar);
		}
		for (i = 0, j = 0; i < old_size; i++, j++)
			*((char *)(ar) + i) = *((char *)(ptr) + j);
		free(ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ar = malloc(new_size);
		if (ar == NULL)
		{
			return (NULL);
			free(ar);
		}
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ar);
}
