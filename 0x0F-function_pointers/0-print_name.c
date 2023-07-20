#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: pointer to char to print
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f != NULL)
	{
		f(name);
		return;
	}
}
