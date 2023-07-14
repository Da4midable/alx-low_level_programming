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
	int lwr;

	lwr = 'a';

	while (lwr <= 'z')
	{

	lwr++;
	putchar(lwr);

	}
	putchar("\n");

	return (0);
}
