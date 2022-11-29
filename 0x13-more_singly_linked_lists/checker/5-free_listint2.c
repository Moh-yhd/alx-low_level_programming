#include "lists.h"

/**
 * free_listint - frees a listint
 * @head: points to the first node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head =  ptr->next;
		free(ptr);
	}
}
