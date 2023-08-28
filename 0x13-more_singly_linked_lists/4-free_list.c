#include "lists.h"

/**
 * free_list - frees a linked list and its nodes
 * @head: Pointer to the head node of the list
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
