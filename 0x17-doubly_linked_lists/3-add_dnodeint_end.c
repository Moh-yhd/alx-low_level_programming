#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: is a pointer to the head of the list
 * @n: is the value of the new node
 *
 * Return: pointer to the head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp1, *temp2;

	temp2 = *head;
	temp1 = malloc(sizeof(dlistint_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;
	temp1->next = NULL;
	temp1->prev = NULL;

	if (temp2 == NULL)
	{
		*head = temp1;
		return (*head);
	}

	while (temp2->next)
	{
		temp2 = temp2->next;
	}

	temp2->next = temp1;
	temp1->prev = temp2;

	return (*head);
}

