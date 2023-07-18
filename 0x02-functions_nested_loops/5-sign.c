#include "main.h"

/**
 * print_sign - displays 1 or 0 if signs are greater or less than zero
 * @n: the character to be checked
 * Return: 0
 */

int print_sign(int n)
{

	if (n > 0)
{
	_putchar('+');
	return (1);
	_putchar('\n');
}
	else if (n == 0)
{
	_putchar('0');
	return (0);
	 _putchar('\n');
}
	else
{
	_putchar('-');
	return (-1);
	 _putchar('\n');
}
	return (0);
}
