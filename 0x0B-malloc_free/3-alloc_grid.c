#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - this function work is to allocate a grid
 ** to the 2 dimensional and return a pointer to the adress
 *@width: width of the array
 *@height: height of the array
 *
 *Return: pointer to the 2-d array
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int n;
	int m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		*(a + n) = malloc(sizeof(int) * width);
	if (*(a + n) == NULL)
		{
	int p = 0;

	for (p = 0; p < n; p++)
	{
		free(*(a + p));
	}
	free(a);
	return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			*(*(a + n) + m) = 0;
		}
	}
	return (a);
}
