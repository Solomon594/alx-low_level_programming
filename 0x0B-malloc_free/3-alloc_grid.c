#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i;
	int j;
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
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (freenum = 0; freenum < i; freenum++)
			{
				free(grid[freenum]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (i = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
