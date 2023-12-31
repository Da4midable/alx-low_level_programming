#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key in a hash table.
 *
 * @key: The key to be indexed.
 * @size: The size of the hash table.
 *
 * Return: The index where the key should be stored in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
