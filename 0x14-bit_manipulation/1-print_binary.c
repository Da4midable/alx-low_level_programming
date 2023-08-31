#include "main.h"

/**
* print_binary - converts integers to binary
* @n: the integer to be converted
* Return: void
*/

	void print_binary(unsigned long int n)
	{
	char buffer[BUFF_SIZE];
	int length = 0;
	int i;

	if (n == 0)
	{
	_putchar('0');
	return;
	}

	while (n > 0)
	{
	buffer[length++] = n % 2 + '0';
	n /= 2;
	}

	for (i = length - 1; i >= 0; i--)
	{
	_putchar(buffer[i]);
	}

	}
