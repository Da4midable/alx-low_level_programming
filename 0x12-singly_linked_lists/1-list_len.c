#include "lists.h"

/**
 * list_len - prints the elements of a linked list
 * @h: is the pointer to the head node
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{

		current = current->next;
		count++;

	}

	return (count);
}
