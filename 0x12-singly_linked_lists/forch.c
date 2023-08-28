#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: is the pointer to the head node
 * Return: count.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		printf("[0] (nil)\n");
		else
		{
		printf("[%u] %s\n", current->len, current->str);
		}

		current = current->next;
		count++;

	}

	return (count);
}
#include "lists.h"

/**
 * list_len - prints the elements of a linked list
 * @h: is the pointer to the head node
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{

		current = current->next;
		count++;

	}

	return (count);
}
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
