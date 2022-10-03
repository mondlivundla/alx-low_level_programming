#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -> frees 2dimension array
 * @grid: 2dimension array
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
