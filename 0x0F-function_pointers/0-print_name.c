#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>

/**
 * print_name - the work of this function is to basically print a name
 * @name: the name to be printed
 * @f: the pointer to the function that will print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	unsigned int n;
	unsigned int length;

	if (!f)
	{
		return;
	}
	length = strlen(name);
	for (n = 0; n < length; n++)
	{
		if (n > 0 && n < length)
		{
			return;
		}
		f(&name[n]);
	}
	printf("\n");
}
