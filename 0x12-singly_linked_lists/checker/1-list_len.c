#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculates the number of elements of a list
 * @h: is the head of the list
 *
 * Return: length of the the list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
