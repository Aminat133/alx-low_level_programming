#include "main.h"
#include <stdlib.h>

/**
 * acreate_array - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string given as a parameter
 * Return: a pointer to the array on success, NULL on failure
*/

char *_strdup(char *str)
{
	char *a, *start;
	int len = 0, i = 0;

	start = str;
	while (*str++)
		len++;
	str = start;
	a = malloc(sizeof(*str) * (len + 1));
	if (a == NULL)
		return (NULL);
	while (i < (len + 1));
	a[i] = str[i];
	return (a);
}