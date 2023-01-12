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
	dlistint_t *node, *head, *temp;
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

	if (idx == 0)
	{
		node->next = head;
		if (head)
			head->prev = node;
		*h = node;
		return (*h);
	}

	for (i = 0; i < idx - 1; i++)
		head = head->next;

	if (head == NULL || head->next == NULL)
		return (NULL);

	temp = head->next;
	head->next = node;
	node->next = temp;
	node->prev = head;
	temp->prev = node;


	return (*h);
}
