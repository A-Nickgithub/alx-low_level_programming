#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This function will execute a function give as a
 * * parameter to it on every element of an array.
 * basically every element of the array will be executed
 * by the function given as a paramater
 *
 * @array: The pointer to the array to be executed
 * @size: the size of the array
 * @action: The pointer to the fucntion
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int n;

	if (!action || !array || size < 1)
	{
		return;
	}
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
