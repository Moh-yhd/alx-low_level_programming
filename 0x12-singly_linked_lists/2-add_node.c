#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds element to a single linked list
 * @head: is a pointer to the pointer head
 * @str: is a string to be added as the str of the node
 *
 * Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int length = 0;

	while (str[length])
		length++;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = length;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}


