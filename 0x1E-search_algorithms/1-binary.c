#include "search_algos.h"
#include <stdio.h>
#include <unistd.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */


int binary_search(int *array, size_t size, int value)
{

	size_t start = 0;
	size_t end = size - 1;
	size_t i, mid;

	if (array == NULL)
		return (-1);


	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}
