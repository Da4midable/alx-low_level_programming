#include "lists.h"

/**
 * add_nodeint_end - add nodes at the beginning of a linked list
 * @head: This is the double pointer for changing value of first node
 * @n: This is the integer element of the node to be appended
 * Return: current.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *current;


	end_node = (struct listint_s *)malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}


		end_node->n = n;

		end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;

	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = end_node;
	}

		return (end_node);
}
