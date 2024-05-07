#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, int low, int high, int value);
void print_array(int *array, int low, int high);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: First index where value is located,
 * or -1 if not present or array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	bound = 1;

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return (binary_search(array, low, high, value));
}

/**
 * binary_search - A helper function to perform binary search
 * @array: A pointer to the first element of the array to search in
 * @low: The starting index of the subarray to search
 * @high: The ending index of the subarray to search
 * @value: The value to search for
 * Return: The first index where value is located, or -1 if not present
 */

int binary_search(int *array, int low, int high, int value)
{

	int mid;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_array - A helper function to print the subarray being searched
 * @array: A pointer to the first element of the array to search in
 * @low: The starting index of the subarray to search
 * @high: The ending index of the subarray to search
 */

void print_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		{
			printf(", ");
		}
	}
	printf("\n");
}
