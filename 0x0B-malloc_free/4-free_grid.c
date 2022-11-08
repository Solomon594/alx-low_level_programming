#include "main.h"

/**
 * free_grid - allocates grid, make and free space
 * @grid: takes width of grid
 * @height: height of grid
 * Return:freed grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
