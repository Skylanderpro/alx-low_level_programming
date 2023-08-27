#include "main.h"

/**
 *free_grid - frees a 2 dimensional grid created by alloc_grid
 *@grid: the grid to be freed
 *@height: rows height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
