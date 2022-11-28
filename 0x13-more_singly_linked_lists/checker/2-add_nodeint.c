#include "lists.h"

/**
 * add_nodeint - adds a node to a list
 * @head: points to the next node
 * @n: is an integer
 *
 * Return: pointer to a list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));

	temp = ptr;
	ptr->n = n;
	ptr->next = *head;
	*head = temp;

	return (*head);
}


