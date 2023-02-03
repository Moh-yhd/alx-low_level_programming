#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct hasn_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */

typedef struct hasn_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_s;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of of size @size
 * Each cell of this array is a pointer t othe first node of a linked list,
 * because we want our HashTable to use a Chanining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

#endif
