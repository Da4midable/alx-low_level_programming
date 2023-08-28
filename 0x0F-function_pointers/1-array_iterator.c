#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - array for iterating function call
 * @array: this is the array elements
 * @action: pointer to function(s) to be executed
 * @size: this is the size of array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
