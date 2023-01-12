#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees 2d grid
 * @grid: the grid to be freed
 * @height: its height
 *
 * Return: nothing
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
