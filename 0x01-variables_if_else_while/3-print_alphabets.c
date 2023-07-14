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
	int l2;

	lwr = 'a';
	l2 = 'A';

	while (lwr <= 'z')
	{
		putchar(lwr);
		lwr++;
	}

	while (l2 <= 'Z')
	{
		putchar(l2);
		l2++;
	}
		putchar ('\n');
	return (0);
}
