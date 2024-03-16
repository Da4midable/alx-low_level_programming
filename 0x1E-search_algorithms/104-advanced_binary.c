#include "search_algos.h"
#include <stdio.h>
#include <math.h>

int advanced_binary_helper(int *array, size_t start, size_t end, int value);

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return advanced_binary_helper(array, 0, size - 1, value);
}

/**
 * advanced_binary_helper - helper function to perform the binary search.
 * @array: a pointer to the first element of the array to search in
 * @start: the starting index of the subarray to search
 * @end: the ending index of the subarray to search
 * @value: the value to search for
 * Return: the index where value is located
 */

int advanced_binary_helper(int *array, size_t start, size_t end, int value)
{
    size_t mid;
	size_t i;

    if (start > end)
        return (-1);

    printf("Searching in array: ");
    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");

    mid = start + (end - start) / 2;
    if (array[mid] == value)
    {
        if (mid == start || array[mid - 1] != value)
            return (int)mid;
        else
            return advanced_binary_helper(array, start, mid, value);
    }
    else if (array[mid] < value)
        return advanced_binary_helper(array, mid + 1, end, value);
    else
        return advanced_binary_helper(array, start, mid - 1, value);
}
