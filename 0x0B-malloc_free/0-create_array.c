#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *create_array - creates array and initializes it to c
* @size: size of array
* @c: inititalization
* Return: z.
*/

char *create_array(unsigned int size, char c)

{
	unsigned int i = 0;

	void *zeroArray = malloc(sizeof(char) * (size + 1));
	char *z = (char *)zeroArray;


	if (z != NULL)
	{

	for (i = 0; i < size; i++)
	z[i] += c;

	}

	if (z == NULL || size == 0)
	{
	return (NULL);
	}
	return (z);
	free(zeroArray);
}
