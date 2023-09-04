#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: a pointer to the array on success, NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int **new_arr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	new_arr = (int **)malloc(sizeof(int *) * height);
	if (new_arr == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		new_arr[i] = (int *)malloc(sizeof(int) * width);
		if (new_arr[i] == NULL)
		{
			for (j = 0; j < i ; j++)
			{
				free(new_arr[j]);
				free(new_arr);
			}
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			new_arr[j][i] = 0;
	}
	return (new_arr);
	free(new_arr);
}
