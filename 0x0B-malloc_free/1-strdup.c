#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string given as a parameter
 * Return: a pointer to the array on success, NULL on failure
*/

char *_strdup(char *str)
{
	char *a;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (*str++)
		len++;
	a = malloc(sizeof(*str) * (len + 1));
	if (a == NULL)
		return (NULL);
	while (i < len)
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';

	return (a);
}
