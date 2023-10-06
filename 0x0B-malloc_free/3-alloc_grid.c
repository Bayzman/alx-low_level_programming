#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - return a pointer to a 2D array of integers
 * @width: int
 * @height: int
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
