#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (int i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}

	free(grid);
}
