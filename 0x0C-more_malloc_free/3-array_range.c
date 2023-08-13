#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *array_range - to allocate memory to a range of arrays
* @min: initial array
* @max: final array
* Return: pointer.
*/


	int *array_range(int min, int max)
{
	int i = 0, j, l;
	int *range;

	l = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	while (i < l)
	{
		i++;
	}
		range = (int *)malloc(i * sizeof(int));

	if (range == NULL)
	{
		return (0);
	}

	for (j = 0; j < i; j++)
	{
		range[j] = min;
		min++;
	}

		return (range);
	}
