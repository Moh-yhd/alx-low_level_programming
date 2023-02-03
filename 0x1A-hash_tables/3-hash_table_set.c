#include "hash_tables.h"

/**
 * hash_table_set - inserts an element
 * @ht: is a pointer to a hash table
 * @key: is the key for the element to be inserted
 * @value: the value corresponding to key
 *
 * Return: 1 if success, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, tmp;
	unsigned long int i, index;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	index = key_index(key, 1024);
	if (ht == NULL)
	{
		ht = hash_table_create(1024);
		ht->array[index] = new_node;
	}

	if ((ht->array)[index] == NULL)
	{
	ht->array[index] = new_node;
	return (1);
	}
	tmp = ht->array[index];
	while (tmp)
	{
		tmp = tmp->next;
	}
	tmp = new_node;
	return (1);
}
	



