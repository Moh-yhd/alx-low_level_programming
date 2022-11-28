#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list_int
 * @h: points to the next node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		nodes++;
		printf("%d", ptr->n);
		ptr = ptr->next;
		printf("\n");
	}
	return (nodes);
}
