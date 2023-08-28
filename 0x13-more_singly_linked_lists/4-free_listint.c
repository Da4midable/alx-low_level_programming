#include "lists.h"

/**
 * free_listint - frees a linked list and its nodes
 * @head: Pointer to the head node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
