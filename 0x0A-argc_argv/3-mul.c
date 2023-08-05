#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints argv
* @argv: array of strings
* @argc: size of array
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;


	for (; i < argc; i++)
{
	if (argc == 3)
{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
}

	else
{
	printf("Error\n");
	return (1);
}

}
	return (0);
}
