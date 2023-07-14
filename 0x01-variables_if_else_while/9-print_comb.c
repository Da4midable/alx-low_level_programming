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
	int coms;

	for (coms = 0; coms < 10; coms++)
	{
		putchar(coms + '0');
	if (coms < 10)
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar ('\n');
	return (0);
}
