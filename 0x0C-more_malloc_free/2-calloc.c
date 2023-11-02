#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of the space in bytes
 *
 * Return: pointer to the memory created
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
