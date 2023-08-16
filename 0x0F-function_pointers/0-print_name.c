#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prints name
 * @name: name to be received from main and printed
 * @f: function to be called by print_name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
