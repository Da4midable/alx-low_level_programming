#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "3-calc.h"

/**
 * main - to take argv and argc
 * @argc: argument counts
 * @argv: argument variables
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int (*calopt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calopt = get_op_func(argv[2]);

	if (!calopt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calopt(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
