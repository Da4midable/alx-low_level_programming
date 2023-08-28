#include "main.h"

/**
* is_prime_number - recursive function to find prime numbers
* @n: integer whose square root is being evaluated
* Return: integer and iteration
*/

int is_prime_number(int n)

{
	if (n <= 1)
	return (0);
	return (call_prime(n, n - 1));
}

/**
* call_prime - to check prime number and forward number to is_prime_number
* @n: integer whose square root is being evaluated
* @i: iterator
* Return: integer and iteration
*/

int call_prime(int n, int i)
{


	if (i == 1)
	return (1);

	if (n % i == 0 && i > 0)
	return (0);

	return (call_prime(n, i - 1));
}

