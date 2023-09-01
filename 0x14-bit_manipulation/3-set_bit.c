#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the integer where the bit will be set.
 * @index: The index of the bit to set, starting from 0.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

		if (index >= BITS_IN_LONG)
		{
			return (-1);
		}

			set = set << index;
			*n = *n | set;

	return (1);
}
