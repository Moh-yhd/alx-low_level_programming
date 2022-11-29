#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at the specific index
 * @head: is a pointer to the first node
 * @index: is the index where the node value is required
 *
 * Return: pointer to the the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	if (head != NULL)
	{
		ptr = head;

		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
			if (count == index)
			{
				return (ptr);
			}
		}
	}

	return (NULL);
}

