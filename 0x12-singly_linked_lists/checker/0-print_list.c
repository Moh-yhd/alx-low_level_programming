#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - prints a list
 * @h: is singly linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		count++;
		ptr = ptr->next;	
	}

	return (count);
}
