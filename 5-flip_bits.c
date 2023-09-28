#include "main.h"

/**
 * flip_bits - flips bit to get from one number to another.
 * @m: original integer
 * @n: destination integer
 * Return: count.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
