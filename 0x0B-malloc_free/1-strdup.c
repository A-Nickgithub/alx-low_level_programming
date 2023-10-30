#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strdup - Returns a pointer to a new memory
 *containing the copy of the string given as parameter
 *
 *@str: The address of the passed string
 *
 *Return: returns pointer to the address of new memory
 */
char *_strdup(char *str)
{
	char *a;
	int length;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	a = malloc(sizeof(char) * length + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < length; n++)
	{
		a[n] = str[n];
	}
	return (a);
}
