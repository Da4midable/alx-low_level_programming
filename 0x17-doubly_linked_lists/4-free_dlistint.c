#include "lists.h"

/**
 * free_dlistint - frees a linked list and its nodes
 * @head: Pointer to the head node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
	{
		return;
	}

	current = head;
	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}

	free(current);
}
