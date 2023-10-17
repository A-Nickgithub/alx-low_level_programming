#include "main.h"
#include <stdio.h>

/**
 *string_toupper - coverts lowercase
 *characters to uppercase
 *@s: the character will be passed here
 *
 *Return: the uppercase character
 */

char *string_toupper(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
	if (s[k] >= 'a' && s[k] <= 'z')
	{
	s[k] = s[k] - 32;
	}
	else
	{
	s[k] = s[k];
	}
	}
	return (s);
}
