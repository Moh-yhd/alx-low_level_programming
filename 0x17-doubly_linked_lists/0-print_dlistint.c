#include "lists.h"

/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: is the head pointer of the lists
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int i;
	if (h == NULL)
		return (NULL);

	temp = h;
	i = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}

	return (i);
}
