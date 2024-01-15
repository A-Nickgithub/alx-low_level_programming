#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strlen - this will be used to find the length of a string
 *@s: string to be passed
 *
 *Return: legnth of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
	i++;
	}
	return (i);
}
