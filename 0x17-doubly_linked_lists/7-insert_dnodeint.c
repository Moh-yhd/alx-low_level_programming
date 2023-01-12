#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: pointer to the first node of the list
 * @idx: where the node is to be inserted
 * @n: value of node
 *
 * Return: pointer to the first node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp1, *head;
	unsigned int i = 0;

	head = *h;
	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	while (head)
	{
		i++;
		if (i == idx)
		{
			temp1 = head->next;
			head->next = node;
			node->next = temp1;
			node->prev = head;
			temp1->prev = node;
		}
		head = head->next;

	}

	return (*h);
}
