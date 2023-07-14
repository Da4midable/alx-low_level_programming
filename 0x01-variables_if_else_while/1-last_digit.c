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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lad;

	lad = n % 10;

	if (lad > 5)
	{
	printf("Last digit of %d is %d and greater than 5\n", n, lad);
	}

	else if (lad == 0)
	{
	printf("Last digit of %d is 0 and is 0\n", n);

	}

	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lad);
	}
	return (0);
}
