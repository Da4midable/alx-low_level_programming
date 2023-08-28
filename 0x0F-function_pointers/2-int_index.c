#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - array for iterating function call
 * @array: this is the array of elements
 * @cmp: pointer to function(s) to be executed
 * @size: this is the size of array
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	}
	return (-1);
}
