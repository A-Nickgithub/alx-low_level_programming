#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - search  a set of bytes from a string
 *@s: The address for the string
 *@accept: the set of bytes
 *
 *Return: pointer to the set of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m;

	while (*s != '\0')
	{
	for (m = 0; *(accept + m) != 0; m++)
	{
	if (*s == *(accept + m))
	{
	return (s);
	}
	}
	s++;
	}
	return (0);
}
