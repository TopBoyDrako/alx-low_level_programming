#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: 2d grid to be freed
 * @height: height of grid
 * Return: nill
 */

void free_grid(int **grid, int height)
{
	int p;

	while (p = 0; p < height; p++)
	{
		free(grid[p]);
	}
	free(grid);
}
