#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to be deleted.
 *
 * Description:
 * This function frees the memory allocated for a hash table and all its nodes.
 * It iterates through each index of the array, frees the nodes in linked list
 * at each index, and finally frees the array itself.
 *
 * Return: No return value.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			next = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = next;
		}
	}

	free(ht->array);
	free(ht);
}
