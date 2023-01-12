#include "lists.h"

/**
 * sum_dlistint - sums all elemnts of a list
 * @head: is a pointer to the first node of the list
 *
 * Return: sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

