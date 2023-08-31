#include "main.h"
#include <stdio.h>
/**
* main - prints argv
* @argv: array of strings
* @argc: size of array
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i = 0;


	while (argv[i] != argv[argc])
{
	i++;
}
	 printf("%d\n", argc - 1);
	return (0);
}
