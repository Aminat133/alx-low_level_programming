#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: a pointer to the array on success, NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *a, *start;
	int i = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	start = s1;
	while (*s1++)
		len1++;
	s1 = start;

	start = s2;
	while (*s2++)
		len2++;
	s2 = start;

	a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (a == NULL)
		return (NULL);

	while (i < (len1 + len2))
	{
		if (i < len1)
			a[i] = s1[i];
		else
		{
			a[i] = *s2++;
		}
		i++;
	}
	a[i] = '\0';
	return (a);
	free(a);
}
