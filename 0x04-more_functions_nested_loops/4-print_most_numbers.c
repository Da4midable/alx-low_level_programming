#include "main.h"

/**
* print_most_numbers - computes the sum of two integers
* Return: Always void
*/

void print_most_numbers(void)
{
int d;

d = 0;

for (; d < 10; d++)
{
if (d != 2 && d != 4)
{
_putchar(d + '0');
}
}
_putchar('\n');

}
