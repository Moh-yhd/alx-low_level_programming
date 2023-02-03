#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: is the key
 * @size: is the size of the hash table
 *
 * Return: int, index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
