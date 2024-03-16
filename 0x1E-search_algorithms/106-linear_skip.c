#include "search_algos.h"
#include <math.h>
#include <stdio.h>


skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev;
	skiplist_t *next = list;

	if (!list)
		return (NULL);

	while (next && next->n < value)
	{
		prev = next;
		next = next->express;
		if (!next)
			break;
		printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);
	}
	if (next)
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, next->index);
	while (prev && prev->index <= next->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
