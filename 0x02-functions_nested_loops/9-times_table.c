#include "main.h"


/**
 * times_table - displays lowercase letters
 * Return: void
 */


void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
{
	k = i * j;

	if (k < 0 && j != 0)
{
	_putchar (' ');
	_putchar(k + '0');
}
	else if (k >= 10)
{
	_putchar(k / 10 + '0');
	_putchar(k % 10 + '0');
}
	else
{
	_putchar (k + '0');
}
	if (j != 9)
{
	_putchar(',');
	_putchar(' ');
	if (i * (j + 1) < 10)
	_putchar(' ');
}
}
	_putchar('\n');
}
}
