#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;	

	va-start(ap, format);

	if (format ==  NULL)
		printf("nil");

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
				printf("%c", va_arg(ap, char));
				break;
		case 'i':
				printf("%d", va_arg(ap, int));
				break;
		case 'f':
				printf("%f", va_arg(ap, double));
				break;		      
		case 's':
				str = va_arg(ap, char*);
			      	if (str != NULL)
				{
					printf("&s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}

