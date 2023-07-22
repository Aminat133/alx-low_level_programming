#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers,last required var.
 * @n: - number of integers passed to the function, first
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i =0;
	
	va_start(ap, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator == NULL)
			continue;
		if (i <= n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(ap);
}