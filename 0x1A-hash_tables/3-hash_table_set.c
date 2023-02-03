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
	hash_node_t *new_node, *tmp;
	unsigned long int index;

	if (ht == NULL || *key == '\n')
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if ((ht->array)[index] == NULL)
	{
	ht->array[index] = new_node;
	return (1);
	}
	tmp = ht->array[index]->next;
	while (tmp)
	{
		tmp = tmp->next;
	}
	tmp = new_node;
	return (1);
}
