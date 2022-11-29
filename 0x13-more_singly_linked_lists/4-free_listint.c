#include "main.h"

/**
 * free_listint - frees a listint
 * @head: points to nodes
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
