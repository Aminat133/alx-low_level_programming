#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @height: height of array
 * @grid: pointer to an array of pointers to array of integers
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	for (; i< height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}