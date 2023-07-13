#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: first n bytes of s2 to concatenate
 * Return: pointer to array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n) {
	char *new_str, *start;
	unsigned int len1= 0, lens2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	start = s1;
	while (*s1++)
		len1++;
	s1 = start;

	if (s2 == NULL)
		s2 = "";

	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		n = lens2;

	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
		 return(NULL);

	for (; i < (len1 + n); i++)
	{
		if (i < len1)
			new_str[i] = s1[i];
		else 
			new_str[i] = s2[j++];
	}
	new_str[i] = '\0';
	return (new_str);
	free(new_str);
}
