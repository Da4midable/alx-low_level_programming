#include "main.h"

/**
 * get_bit - Takes the bit at index position
 * @n: the integer to be converted
 * @index: the iterator
 * Return: bit and index
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int bit;

		if (index >= BITS_IN_LONG)
		{
			return (-1);
		}


		n = n >> index;

		bit = n & 1;
	return (bit);
}
