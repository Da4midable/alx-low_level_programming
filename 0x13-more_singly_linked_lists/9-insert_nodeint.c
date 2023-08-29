#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given index in the linked list
 * @head: double pointer to the head of the list
 * @idx: index at which the new node should be inserted
 * @n: value for the new node
 * Return: address of the new node, or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new = (struct listint_s *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
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
		current->next = new;
		return (new);
}
