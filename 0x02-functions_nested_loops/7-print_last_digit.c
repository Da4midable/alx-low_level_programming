#include "main.h"

/**
 * print_last_digit - computes the absolute value of an integer
 * @n: computes the absolute value
 * Return: Absolute value to be computed
 */

int print_last_digit(int n)
{
	int lad;

	lad = n % 10;

	if (lad < 0)
{
	lad = lad * -1;
}
	_putchar(lad + '0');


	return (lad);

}
