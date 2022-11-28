#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - counts the number of lists in a lsit
 * @h: points to the next node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
