#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - This function creates a new dog
 * @name: The first member
 * @age: The second member
 * @owner: The third member
 *
 * Return: The pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *j, *k;
	int name_len = strlen(name), owner_len = strlen(owner), i;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
	{
		return (0);
	}
	j = malloc(sizeof(char) * (name_len + 1));
	if (!j)
	{
		free(j);
		free(ptr);
		return (0);
	}
	k = malloc(sizeof(char) * (owner_len + 1));
	if (!k)
	{
		free(ptr);
		free(k);
		free(j);
		return (0);
	}
	for (i = 0; i < name_len; i++)
	{
		j[i] = name[i];
	}
	j[i] = '\0';
	for (i = 0; i < owner_len; i++)
	{
		k[i] = owner[i];
	}
	k[i] = '\0';
	ptr->name = j;
	ptr->age = age;
	ptr->owner = k;
	return (ptr);
}
