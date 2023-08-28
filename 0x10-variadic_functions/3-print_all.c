#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints to display anything
 * @format: types of function arguments
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i;
	char *nil, *p = "";

	va_start(list, format);
	i = 0;
	if (format)
	{
		while (format[i])
		{
		switch (format[i])
		{
			case'c':
			printf("%s%c", p, va_arg(list, int));
			break;
			case 'i':
			printf("%s%d", p, va_arg(list, int));
			break;
			case 'f':
			printf("%s%f", p, va_arg(list, double));
			break;
			case 's':
			nil = va_arg(list, char *);
			if (!nil)
			nil = "(nil)";
			printf("%s%s", p, nil);
			break;
			default:
			i++;
			continue;
		}
			p = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
