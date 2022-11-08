#include "main.h"

/**
 * alloc_grid - allocates grid, makes space and free
 * @width: width of grid
 * @height: height of grid
 * Return: grig thats freed of space
 */
int **alloc_grid(int width, int height)
{
	int freenum;
	int **grid;
	int i, j;
	int x;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int *) * width);
		if (grid[i] == NULL)
		{
			for (freenum = 0; freemum < i; freenum++)
			{
				free(grid[freenum]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	return (grid);
	}
}
