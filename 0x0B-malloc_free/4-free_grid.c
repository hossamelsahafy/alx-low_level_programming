#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to  free a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * @grid: parameter point to integer
 *
 * @height: parameter point to integer
 *
 * Return: if grid == NULL or height == 0 it will exit
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		free(grid);
	}
}
