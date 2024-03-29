#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array
 *	using interpolation search
 * @array: A pointer to the first element of the array
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value in the array if found, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
					* (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
