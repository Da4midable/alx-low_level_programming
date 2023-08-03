#include "main.h"

/**
* _sqrt_recursion - to find square root of n and send result up
* @n: integer whose square root is being evaluated
* Return: integer and iteration
*/

int _sqrt_recursion(int n)

{
	return (_sqrt_real(n, 1));
}

/**
* _sqrt_real - to find square root of n and send result up
* @n: integer whose square root is being evaluated
* @i: number of iteration
* Return: integer and iteration
*/
int _sqrt_real(int n, int i)
{
	int sroot = i * i;

	if (sroot > n)
	return (-1);

	if (sroot == n)
	return (i);

	return (_sqrt_real(n, i + 1));
}

