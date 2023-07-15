#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - to print random with printf
 *   *
 *    * Return: Always 0.
 *    **/
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	for (c = 0; c <= 9; c++)
	{
	for (d = 0; d <= 9; d++)
	{
	if ((a * 10 + b) < (c * 10 + d))
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(' ');
		putchar(c + '0');
		putchar(d + '0');
	if (!(a == 9 && b == 8 && c == 9 && d == 9))
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

