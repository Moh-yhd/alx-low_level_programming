#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at index
 * @head: is pointer to the head node
 * @index: is the index where node is required
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp)
	{
		i++;
		temp = temp->next;
		if (i == index)
		{
			return (temp);
			break;
		}
	}
	return (NULL);
}

