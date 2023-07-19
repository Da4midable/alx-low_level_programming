#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_to_98 - computes the absolute value of an integer
* @n: computes the absolute value
* Return: ...
*/

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}
printf("\n");
}
