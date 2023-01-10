#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a frunction that frees a 2 dimentional grid
 *@grid: Grid
 *@height: ingeyer values
 * Return: Return nothing
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
