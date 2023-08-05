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
	int i = 1;
	int sum = 0;

        if (argc == 1)
{
        printf("0\n");
	return (0);

}


	for (; i < argc; i++)
{	
	int num = atoi(argv[i]);

	if (num == 0 && argv[i][0] != '\0')
{
	printf("Error\n");
	return (1);
}
	sum += num;

}
	printf("%d\n", sum);		
	return (0);
}
