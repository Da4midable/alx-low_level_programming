#include "lists.h"

/**
 * pop_listint - deletes nodes at the beginning of a linked list
 * @head: This is the double pointer for traversing the list from first node
 * Return: n.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

		current = *head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{	current = *head;
		*head = current->next;
		num = current->n;
		free(current);
		return (num);
	}
}
