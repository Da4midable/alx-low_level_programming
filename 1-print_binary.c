#include "main.h"

/**
 * print_binary - converts integers to binary
 * @n: the integer to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = BITS_IN_LONG - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			break;
		}
	}

	for (; i >= 0; i--)
	{
		_putchar((n >> i) & 1 ? '1' : '0');
	}
}
