#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: is a pointer ot the head node
 *
 * Return: the data in the deleted node (int)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	else 
	{
		ptr = *head;
		n = ptr->n;
		*head = (ptr->next)->next;
		free(ptr);
	}

	return (n);
}
