#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a dog struct type
 * @d: the type of structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
