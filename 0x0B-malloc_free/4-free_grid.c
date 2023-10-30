#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *free_grid - frees 2-D array
 *@grid: 2d array
 *@height: height of the 2-d array
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(*(grid + n));
	}
	free(grid);
}
