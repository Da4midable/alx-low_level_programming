#include "lists.h"

/**
 * get_nodeint_at_index - deletes nodes at the beginning of a linked list
 * @head: This is the pointer pointed to the first node
 * @index: The nth node
 * Return: n.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int nth = 0;


	if (head == NULL)
	{
		return (0);
	}
		current = head;


		while (current != NULL)
		{
			if (nth == index)
			{
				return (current);
			}

			current = current->next;
			nth++;
		}
	return (NULL);
}
