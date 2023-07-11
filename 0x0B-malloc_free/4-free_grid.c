#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @h: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int h)
{
	int n;

	for (n = 0; n < h; n++)
	{
		free(grid[n]);
	}
	free(grid);
}

