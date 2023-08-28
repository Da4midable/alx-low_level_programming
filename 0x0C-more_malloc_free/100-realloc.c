#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_realloc - to behave exactly like mimic realloc
* @ptr: memory to be reallocated
* @old_size: initial bytes to be malloc'ed
* @new_size: new bytes to be assigned (usually) bigger memory
* Return: NULL or ptr.
*/


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int l = new_size - old_size;	

	ptr = malloc(old_size + l);

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
	free(ptr);


}
