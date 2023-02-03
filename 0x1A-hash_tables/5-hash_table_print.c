#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is pointer to the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flag = 0;

	if (ht != NULL)
	{
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
	if (ht->array[i] != NULL)
	{
	if (flag == 1)
		printf(", ");
	printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
	flag = 1;
	tmp = ht->array[i]->next;
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->next;
		if (tmp != NULL)
			printf(", ");
	}
	}
	}
	printf("}\n");
	}
}
