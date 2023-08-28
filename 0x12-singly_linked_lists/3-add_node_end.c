#include "lists.h"

/**
 * add_node_end - add nodes at the beginning of a linked list
 * @head: This is the double pointer for changing value of first node
 * @str: This is the string to be duplicated
 * Return: current.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *current;


	end_node = (struct list_s *)malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}


	end_node->str = strdup(str);

	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
		end_node->len = strlen(str);
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
