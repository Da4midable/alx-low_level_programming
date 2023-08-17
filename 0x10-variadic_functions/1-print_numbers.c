#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function prints integers
 * @separator: separates argument
 * @n: number of arguments passed into function
 * Return: 0 or sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(list, int));

		if (i != (n - 1) && separator != NULL)

			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(list);
}
