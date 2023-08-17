#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
/**
 * sum_them_all - function sums varying numbers of arguments
 * @n: number of arguments passed into function
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	if (n == 0)
		return (0);

	va_end(list);

	return (sum);
}
