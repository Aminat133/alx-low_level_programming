#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument of your program.
 * @av: argument of your program.
 * Return: a pointer to the array on success, NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i = 0, len = 0, j = 0, k = 0;


	if (ac == 0||av == NULL)
		return (NULL);

	for(; i < ac; i++)
	{
		for (; av[i][j]; j++)
			len++;
		len++;
	}
	len++;

	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[k++] = av[i][j];
		}
		new_str[k++] = '\n';
	}
	new_str[k] = '\0';
	return (new_str);
	free(new_str);
}
