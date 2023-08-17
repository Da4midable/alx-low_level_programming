#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- function prints strings
 * @separator: separates argument
 * @n: number of arguments passed into function
 * Return: 0 or sum
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	i = 0;

	while (i < n)
	{
		printf("%s", va_arg(list, char *));

		if (i != (n - 1) && separator != NULL)

			printf("%s", separator);
		if (separator == NULL)
			printf("nil");

		i++;
	}

	printf("\n");

	va_end(list);
}
