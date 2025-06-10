#include <stdlib.h>
#include "main.h"

/**
 *free_grid - frees 2 dimensional grid
 *@grid: the 2 dimensional grid
 *@height: height of the grid
 *Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
