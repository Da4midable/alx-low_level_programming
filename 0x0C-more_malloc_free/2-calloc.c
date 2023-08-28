#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_calloc - to imitate stdlib calloc
* @nmemb: number of array members
* @size: size of each element of array
* Return: pointer.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{	int i = 0, j = 0;
	char *cast;

	j = nmemb * size;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
		cast = malloc(j);

	if (cast == NULL)
	{
		return (NULL);
	}

	while (i < j)
	{
		cast[i] = 0;
		i++;
	}
	return (cast);
}
