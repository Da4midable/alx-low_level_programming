#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *malloc_checked - function for checking if memory alloc is a success
* @b: integer
* Return: void.
*/

void *malloc_checked(unsigned int b)
{
	void *mc;

	mc = malloc(b);

	if (mc == NULL)
	{
	exit(98);
	}
	return (mc);
}
