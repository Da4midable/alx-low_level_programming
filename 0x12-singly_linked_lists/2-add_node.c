#include "lists.h"

/**
 * list_len - prints the elements of a linked list
 * @h: is the pointer to the head node
 * Return: count.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t **current;

	str = strdup(&head->str);
	head->next = current;
	current = head;

	while (current != NULL)
	{

		current = current->next;

	}
		return (head);
}
