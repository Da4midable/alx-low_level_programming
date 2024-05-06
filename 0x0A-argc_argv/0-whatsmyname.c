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

	for (; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}
