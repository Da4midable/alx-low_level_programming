#include "main.h"

/**
* *_print_rev_recursion - recursive function that prints a string
* @s: pointer to string
* Return: void
*/

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{

		return;

	}

	else
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);

	}
}
