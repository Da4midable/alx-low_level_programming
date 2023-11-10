#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given index in a linked list
 * @h: double pointer to the head of the list
 * @idx: index at which the new node should be inserted
 * @n: value for the new node
 * Return: address of the new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int count = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	current = *h;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	new->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new;
	}
	current->next = new;
	return (new);
}
