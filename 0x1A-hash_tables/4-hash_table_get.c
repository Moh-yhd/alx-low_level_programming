#include "hash_tables.h"

/**
 * hash_table_get - gets the value of a node
 * @ht: pointer to the hash table
 * @key: key of a node
 *
 * Return: pointer to the value of a node
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)(key), ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);

	/* if there is collision */
	tmp = ht->array[index]->next;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
