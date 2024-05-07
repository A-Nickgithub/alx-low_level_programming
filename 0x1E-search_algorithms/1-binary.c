#include "search_algos.h"

/**
 * recursive_search - searches a value in an array of
 * ints using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of array
 * @value: value to search in
 * Return: index of the num
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t h;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (h = 0; h < size; h++)
		printf("%s %d", (h == 0) ? ":" : ",", array[h]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the num
 *
 * @array: input array
 * @size: size of array
 * @value: value to search in
 * Return: index of the num
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
