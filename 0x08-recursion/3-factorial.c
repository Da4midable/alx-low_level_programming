#include "main.h"

/**
*  factorial - recursive function that computes facttorial of a string
* @n: integer to index
* Return: n
*/

int factorial(int n)
{

	if (n < 0)
	{

		return (-1);

	}

	else if (n == 0)
	{
		return (1);
	}

	else

	return n * factorial(n - 1);
}
