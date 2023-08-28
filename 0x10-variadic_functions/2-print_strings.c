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
	char *pnil;

	va_start(list, n);

	i = 0;

	while (i < n)
	{
		pnil = va_arg(list, char *);

		if (pnil == NULL)
			printf("(nil)");
		else
			printf("%s", pnil);

		if (i != (n - 1) && separator != NULL)

			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(list);
}
