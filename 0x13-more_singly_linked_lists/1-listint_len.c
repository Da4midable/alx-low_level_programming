#include "lists.h"

/**
 * listint_len - lists the elements of a linked list
 * @h: is the pointer to the head node
 * Return: count.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{

		current = current->next;
		count++;

	}

	return (count);
}
