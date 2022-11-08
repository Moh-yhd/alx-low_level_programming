#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid of memory allocated
 * @grid: is a pointer to a 2d array
 * @height: is height of the grid
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
