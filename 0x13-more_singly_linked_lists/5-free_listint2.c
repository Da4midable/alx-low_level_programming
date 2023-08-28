#include "lists.h"

/**
 * free_listint2 - frees a linked list and its nodes
 * @head: Pointer to the head node of the list
 */

void free_listint2(listint_t **head)
{

	listint_t *current, *buffer;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		buffer = current->next;
		free(current);
		current = buffer;
	}
	*head = NULL;

}
