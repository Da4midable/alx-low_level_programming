#include "lists.h"

/**
 * get_dnodeint_at_index - deletes nodes at the index of a doubly linked list
 * @head: This is the pointer pointed to the first node
 * @index: The nth node
 * Return: NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;


	if (head == NULL)
	{
		return (0);
	}

	current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}

		current = current->next;
		i++;
	}
	return (NULL);
}
