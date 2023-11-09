#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a doubly linked list
 * @head: Double pointer for inserting new node at the tip of node
 * @n: integer element of node
 * Return: current.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *beg_node;

	beg_node = malloc(sizeof(dlistint_t));

	if (beg_node == NULL)
	{
		return (NULL);
	}

	beg_node->n = n;
	beg_node->prev = NULL;
	beg_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = beg_node;
	}

	*head = beg_node;
	return (beg_node);
}
