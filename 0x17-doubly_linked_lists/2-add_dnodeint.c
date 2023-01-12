#include "lists.h"

/**
 * add_dnodeint - adds a node on a list
 * @head: is a pointer to the head
 * @n: is the value of the new node
 *
 * Return: pointer to updated list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *temp2;

	temp2 = *head;
	temp = malloc(sizeof(dlistint_t));
	if (head == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	temp2->prev = temp;
	temp->next = temp2;
	*head = temp;
	
	return (*head);
}
