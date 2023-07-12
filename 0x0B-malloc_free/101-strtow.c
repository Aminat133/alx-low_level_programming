#include "main.h"
#include <stdlib.h>

/**
 * argstostr - splits a string into words.
 * @str: string to split
 * Return: a pointer to the array on success, NULL on failure
 */

char **strtow(char *str)
{
	char **array;
	int i = 0, j, m, k = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
				((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			count++;
	}
	if (count == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < count; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			len = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, len++;
			array[k] = malloc((len + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(array[k]);
				free(array);
				return (NULL);
			}
			for (m = 0; m < len; m++, i++)
				array[k][m] = str[i];
			array[k++][m] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}
/*
 *char **strtow(char *str)
{
	char **new_arr;
	int i, j = 0, k = 0, len = 0, word_count = 0, a = 0, b =0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		len++;
		if (str[i] == " ")
			word_count++;
	}

	if (len == 0)
		return (NULL);

	word_count++;

	new_arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (new_arr == NULL)
		return (NULL);

for (i = 0; i < len; i++)
	{
		j++
		if (str[i] == " ")
		{
			new_arr[k] = (char *)malloc(sizeof(char ) * j);
			j = 0
			if (new_arr[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(new_arr[k]);
				free(new_arr);
				return (NULL);
			}
			k++
		}
	}
	new_arr[k]= (char *)malloc(sizeof(char ) * 1);
	
	for (i = 0; i < len; i++)
	{
		if (str[i] == " ")
		{
			new_arr[a][b] = "\0";
			a++;
			b = 0;
		}
		else 
		{
			new_arr[a][b++] = str[i];
		}
	}
	new_arr[++a][0] = "\0";
return (new_arr);
free(new_arr);
}
*/
