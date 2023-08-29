#include "lists.h"

/**
 * pop_listint - deletes nodes at the beginning of a linked list
 * @head: This is the double pointer for traversing the list from first node
 * Return: n.
 */

int pop_listint(listint_t **head)
{
	listint_t *current, *buffer;

		current = *head;

	if (current == NULL)
	{
		EXIT_FAILURE;
	}
	else
	{
		buffer = current;
		current = current->next;
		buffer = NULL;
		free(buffer);
	}
		return (current->n);
}
