#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: is the pointer to the head node
 * Return: count.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);

		current = current->next;
		count++;

	}

	return (count);
}
