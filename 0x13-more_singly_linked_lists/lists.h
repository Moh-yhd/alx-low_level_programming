#ifndef _LISTS_H
#define _LISTS_H
#include <stdlib.h>
/**
 * struct listint_s - singly linked lists
 * @n: is an integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
#endif /* #ifndef _LISTS_H */
