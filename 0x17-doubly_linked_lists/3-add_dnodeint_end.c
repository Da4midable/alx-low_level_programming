#include "lists.h"

/**
 * add_dnodeint_end - add nodes at the end of a doubly linked list
 * @head: the double pointer for inserting a new node at the end of list
 * @n: integer element of list
 * Return: current.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *current = *head;


	end_node = malloc(sizeof(dlistint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}


	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = end_node;
		end_node->prev = current;
	}

		return (end_node);
}
