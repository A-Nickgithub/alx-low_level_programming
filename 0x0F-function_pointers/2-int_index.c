#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - this func will be used to search foe integers
 * @array: an array pointer
 * @size: The size of the array being pointed to
 * @cmp: Function to search for a number
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !cmp || !array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

