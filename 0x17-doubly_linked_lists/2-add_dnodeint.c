#include "lists.h"

/**
 * add_dnodeint - adds a node on a doubly linked list
 * @head: is a pointer to the head
 * @n: is the value of the new node
 *
 * Return: pointer to uodated list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (head == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head)
	{
		(*head)->prev = temp;
		temp->next = *head;
	}
	*head = temp;
	return (*head);
}
