#include "lists.h"

/**
 * sum_listint - deletes nodes at the beginning of a linked list
 * @head: This is the pointer pointed to the first node
 * Return: sum.
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
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
