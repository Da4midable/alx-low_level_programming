#include "main.h"

/**
* print_line - computes the sum of two integers
* @n: does whatever
* Return: Always void
*/

void print_line(int n)
{
	int m;

	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	for (m = 0; m < n; m++)
	_putchar('_');
}
	_putchar('\n');
}

