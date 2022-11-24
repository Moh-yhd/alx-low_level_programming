#ifndef _LISTS_H
#define _LISTS_H

/**
 * struct list_s - creates a structure called list_t
 * @str: a string
 * @len: is len of the string
 * @next: is a pointer
 *
 * Description: this structure have a string, its length
 * and the next pointer to it
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *);

#endif
