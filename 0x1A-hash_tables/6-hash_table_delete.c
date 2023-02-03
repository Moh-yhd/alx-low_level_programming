#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: is pointer to a hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp2;
	unsigned long int i;

	if (ht == NULL)
		return;


	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
		tmp = ht->array[i]->next;
		while (tmp)
		{
			tmp2 = tmp;
			tmp = tmp->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
		free(ht->array[i]->key);
		free(ht->array[i]->value);
		free(ht->array[i]);
		}

	}
	free(ht->array);
	free(ht);
}
