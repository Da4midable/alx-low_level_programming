#include "main.h"

/**
* print_square - prints square
* @size: this is the variable name
* Return: Always void
*/

void print_square(int size)
{
	int a;
	int b;


	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	for (a = 0; a < size; a++)
{
	for (b = 0; b < size; b++)
{
	_putchar(35);
}
	_putchar('\n');

}
}
}
