#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - to print random with printf
 *
 * Return: Always 0.
**/

int main(void)
{
	int dg;

	for (dg = 0; dg <= 9; dg++)
	{
		putchar(dg + '0');
	}
		putchar('\n');

	return (0);
}
