#include "main.h"
#include <time.h>
/**
 * jack_bauer - computes the absolute value of an integer
 * Return: ...
 */

void jack_bauer(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = 0; w < 3; w++)
{
	for (x = 0; x < 10; x++)
{
	if ((w < 2 && x < 10) || (w < 3 && x < 4))
{
	for (y = 0; y < 6; y++)
{
	for (z = 0; z < 10; z++)
{
	_putchar(w + '0');
	_putchar(x + '0');
	_putchar(':');
	_putchar(y + '0');
	_putchar(z + '0');
	_putchar('\n');
}
}
}
}
}
}
