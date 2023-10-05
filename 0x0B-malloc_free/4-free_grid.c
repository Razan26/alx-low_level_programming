#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - 2d array
 * @height: height dimension of grid
 * @grid: 2d grid
 * Return: NON
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}

	free(grid);
}
