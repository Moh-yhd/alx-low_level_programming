#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a
 * node at an index
 * @head: points to the head
 * @idx: is an index where a node is to
 * to be inserted
 * @n: is the data of the node
 *
 * Return: pointer to the added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;
	unsigned int count = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	temp = *head;
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
		if (count == idx)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (*ptr);
		}
	}

	return (NULL);
}
