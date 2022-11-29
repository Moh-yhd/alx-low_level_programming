#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: points to the first node
 * @n: is an int
 *
 * Return: pointer to the thr first node if success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;

	return (*head);
}
