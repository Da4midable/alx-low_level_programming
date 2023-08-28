#include "lists.h"

/**
 * add_node - add nodes at the beginning of a linked list
 * @head: This is the double pointer for changing value of first node
 * @str: This is the string to be duplicated
 * Return: current.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *beg_node;

	if (str == NULL)
	{
		return (NULL);
	}

	beg_node = (struct list_s *)malloc(sizeof(list_t));

	if (beg_node == NULL)
	{
		return (NULL);
	}


	beg_node->str = strdup(str);

	if (beg_node->str == NULL)
	{
		free(beg_node);
		return (NULL);
	}
		beg_node->len = strlen(str);
		beg_node->next = *head;
		*head = beg_node;


		return (beg_node);
}
