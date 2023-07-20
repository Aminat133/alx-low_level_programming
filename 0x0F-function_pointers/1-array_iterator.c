#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 *
 * @array: pointer to array to iterate
 * @f: size of array
 * @action: pointer to function to execute 
 * Return: nothing
 */

 void array_iterator(int *array, size_t size, void (*action)(int))
 {
	int i;

	for (i= 0; i < size; i++)
	{
		action(array[i]);
	}
 }