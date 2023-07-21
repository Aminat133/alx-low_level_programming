#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: - no. of other arguments, first and last required var.
 * Return: int (sum of all its parameters)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
