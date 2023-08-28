#include "lists.h"

/**
 * add_nodeint - add nodes at the beginning of a linked list
 * @head: This is the double pointer for changing value of first node
 * @n: This is the integer to be inserted
 * Return: current.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beg_node;

	beg_node = (struct listint_s *)malloc(sizeof(listint_t));

	if (beg_node == NULL)
	{
		return (NULL);
	}



	beg_node->n = n;


		beg_node->next = *head;
		*head = beg_node;


		return (beg_node);
}
