#include "search_algos.h"
#include <math.h>
#include <stdio.h>


/**
 * jump_list - Searches for a value in a sorted list of integers using the
 *             Jump search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, returns
 *         NULL. Otherwise, returns a pointer to the first node where value is
 *         located.
 *
 * Description: Uses the square root of the size of the list as the jump step.
 *              Every time a value in the list is compared to the value being
 *              searched, the value is printed.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{

	size_t jump_step = sqrt(size);
	listint_t *prev = list;
	listint_t *next = list;
	size_t i;

	if (!list)
		return (NULL);

	while (next && next->index < size - 1 && next->n < value)
	{
		prev = next;
		for (i = 0; i < jump_step && next->next != NULL; i++)
			next = next->next;
		if (!next)
			break;
		printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);
	}

	if (next)
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, next->index);

	while (prev && prev->index <= (next ? next->index : size - 1))
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
