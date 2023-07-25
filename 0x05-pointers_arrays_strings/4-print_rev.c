#include "main.h"
/**
* print_rev - prints in reverse
* @s: is the string of char type
* Return: Always 0.
*/

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
{
	end++;
}
	while (end >= s)
{
	_putchar(*end);
	end--;
}
	_putchar('\n');

}
