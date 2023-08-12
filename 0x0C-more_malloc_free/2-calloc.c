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
{
	void *cast;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
		cast = malloc(nmemb * size);

	if (cast == NULL)
	{
		return (NULL);
	}
	return (cast);
}
