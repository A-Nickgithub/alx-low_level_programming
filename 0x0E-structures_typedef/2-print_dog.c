#include <stdio.h>
#include "dog.h"

/**
* print_dog - Prints the details of a struct dog.
* @d: A pointer to a struct dog to be printed.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
