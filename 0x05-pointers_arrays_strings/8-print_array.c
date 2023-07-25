#include <stdio.h>
#include "main.h"

/**
* print_array - calculates the length of a string
* @a: is the pointer
* @n: is the integer
* Return: Always 0.
*/

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
{
	printf("%d", a[z]);

	if (z != (n - 1))
{
	printf(", ");
}
}
	printf("\n");

}
