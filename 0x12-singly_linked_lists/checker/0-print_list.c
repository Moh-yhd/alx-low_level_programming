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
	int i;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			i = 0;
		while (ptr->str[i] != '\0')
		{
			i++;
		}
			printf("[%d] %s\n", i, ptr->str);
		}
		ptr = ptr->next;
		
	}
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
