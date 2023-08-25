#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: is the pointer to the head node
 * Return: count.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		printf("[0] (nil)\n");
		else
		{
		printf("[%lu] %s\n", current->len, current->str);
		}

		current = current->next;
		count++;

	}

	return (count);
}
