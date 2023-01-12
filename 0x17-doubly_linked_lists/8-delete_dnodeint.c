#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: is a pointer to the head of list
 * @index: index where the node is to be deleted
 *
 * Return: 1 if success or -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int i;


	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;

		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);

	temp2 = temp->next;
	temp->next = temp2->next;

	if (temp->next != NULL)
	{
		temp->next->prev = temp;
	}
	free(temp2);
	return (1);
}
