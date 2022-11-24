#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node at the end of a list
 * @head: is a pointer to the pointer of the start of a list
 * @str: is atring
 *
 * Return: pointer to the head of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;
	unsigned int length = 0;


	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = length;
	ptr->next = NULL;

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;

	return (ptr);
}

