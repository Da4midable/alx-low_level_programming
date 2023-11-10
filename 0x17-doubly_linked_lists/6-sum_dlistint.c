#include "lists.h"

/**
 * sum_dlistint - sums integer elements in a doubly linked list
 * @head: pointer to the first node
 * Return: sum.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;


	if (head == NULL)
	{
		return (0);
	}
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
