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

	for (a = 0; a <= 9; a++)
	{
	for (b = a; b <= 9; b++)
	{
	if (a != b)
	{
		putchar(a + '0');
		putchar(b + '0');
	if (a != 9 || b != 8)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

