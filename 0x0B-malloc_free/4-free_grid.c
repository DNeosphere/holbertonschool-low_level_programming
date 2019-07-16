#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory from a grid
 * @grid: previously created grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = height; a >= 0; a--)
	{
		free(grid[a]);
	}
	free(grid);
}
