#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{

	size_t jump_step = sqrt(size);
	size_t prev = 0;
	size_t next = 0;

	if (array == NULL)
		return (-1);

	while (next < size && array[next] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", next, array[next]);
		prev = next;
		next += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, next);

	while (prev < size && array[prev] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
