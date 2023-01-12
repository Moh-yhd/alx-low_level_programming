#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a list
 * @h: is head pointer to the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i)
}
