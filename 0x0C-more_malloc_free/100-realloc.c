#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - this function will be used to reallocate a memory block
 * using the malloc function though.
 *
 * @ptr: this is the pointer to the memory we want to koroga
 * @old_size: The size in bytes of the 'old memory'
 * @new_size: The size in bytes of the 'new memory'
 *
 * Return: pointer to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_size = old_size;
	}
	for (i = 0; i < new_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
