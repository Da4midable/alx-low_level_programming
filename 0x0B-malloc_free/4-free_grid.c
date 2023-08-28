#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - free alloc function
* @grid: to call alloc function
* @height: row array
* Return: void.
*/

void free_grid(int **grid, int height)
{
	int i;

		for (i = 0; i < height; i++)
	{


		free(grid[i]);
	}

	free(grid);
}
