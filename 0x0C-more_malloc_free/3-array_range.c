#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * array_range - This funtion will create a memory containing an array
 * of integers. the size of the array will depend on the number of elements
 * passed to the function
 *
 * @min: The first value that will be stored in the array
 * @max: the last value that will be store in the array
 *
 * Return: a pointer to the memory
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
