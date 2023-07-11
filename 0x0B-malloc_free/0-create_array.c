#include "main.h"
#include <stdlib.h>

/**
 * acreate_array - a function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: size of array
 * @c: initial char
 * 
 * Return: a pointer to the array on success, NULL on failure
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (i++ < size)
	{
		a[i] = c;
	}
	return (a);
	free(a);
}
