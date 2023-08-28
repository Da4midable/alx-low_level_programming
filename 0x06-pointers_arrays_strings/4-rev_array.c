#include "main.h"

/**
* reverse_array - reverses array elements
* @a: pointer
* @n: max bytes
* Return: Always 0.
*/

void reverse_array(int *a, int n)
{
	int index;
	int buffer;

	for (index = n - 1; index >= n / 2; index--)
{
	buffer = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = buffer;
}

}
