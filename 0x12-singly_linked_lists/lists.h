#ifndef _LISTS_H
#define _LISTS_H
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *);
size_t list_len(const list_t *h);

#endif
