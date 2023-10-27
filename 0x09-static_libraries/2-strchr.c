#include "main.h"
#include <stdio.h>

/**
 *_strchr - find a specific character in a string
 *@s: the address of the string
 *@c: the character to be searched
 *
 *Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	return (0);
}
