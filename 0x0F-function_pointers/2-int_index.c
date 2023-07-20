#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - searches for an integer.
 *
 * @array: pointer to array to iterate
 * @size: size of array
 * @action: pointer to function to execute 
 * Return: nothing
 */
 int int_index(int *array, int size, int (*cmp)(int))
 {
	int i;


	if (size <= 0)
		return (-1);
	
	for (i= 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
 }
 