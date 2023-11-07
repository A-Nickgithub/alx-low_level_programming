#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - This func will initialize the member variables
 * of my structure
 *
 * @d: this will point to the address of my_dog while working in here
 * @name: This is the first member
 * @age: This is the second member
 * @owner: Third member
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
