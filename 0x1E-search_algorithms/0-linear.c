#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches using Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Description: function takes a pointer to first element of array of integers,
 * the number of elements in array, and a value to search for. It iterates over
 * each element in the array, printing current value being checked, and returns
 * index of the first match found. If value is not found or if array is NULL,
 * function returns -1.
 *
 * Return: The first index where value is located, or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < (int)(size))
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}

	return (-1);
}
