#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: pointer to array to iterate
 * @size: size of array
 * @cmp: pointer to function to execute
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
