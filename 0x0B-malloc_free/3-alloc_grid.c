#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* **alloc_grid - duplicates string
* @width: row array
* @height: column array
* Return: ar.
*/

int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

		ar = malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));

		if (ar[i] == NULL)
		{

		for (j = i; j >= 0; j--)
		{
			free(ar[j]);
		}
		free(ar);
		return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ar[a][b] = 0;
		}
	}
	return (ar);
}
