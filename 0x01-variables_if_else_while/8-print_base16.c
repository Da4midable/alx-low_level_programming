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
	int hexd;

	for (hexd = 0; hexd < 16; hexd++)
	{
	if (hexd < 10)
	{
		putchar(hexd + '0');
	}
	else
	{
		putchar((hexd - 10) + 'a');
	}
	}
		putchar ('\n');
	return (0);
}
