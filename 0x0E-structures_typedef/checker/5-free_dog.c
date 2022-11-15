#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for dog_t
 * @d: is a pointer for a struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
