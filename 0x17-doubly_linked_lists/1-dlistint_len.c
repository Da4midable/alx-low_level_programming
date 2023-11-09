#include "lists.h"

/**
 * dlistint_len - counts the elements of a doubly linked list
 * @h: is the pointer to the head node
 * Return: count.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{

		current = current->next;
		count++;

	}

	return (count);
}
