#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @char *s1: string to be concatenated
 * @char *s2: string to be concatenated
 * Return: a pointer to the array on success, NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *a, *start;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	start = s1;
	while (*s1++)
		len1++;
	s1 = start;

	start = s2;
	while (*s2++)
		len2++;
	s2 = start;

	a = malloc(sizeof(char) * (len1 + len2 + 1));

	while (i < len1)
	{
		a[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		a[i + j + 1] = s2[j];
		j++;
	}
	a[i + j + 1] = '\0';
	return (a);
}
