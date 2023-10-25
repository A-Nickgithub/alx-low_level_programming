#include "main.h"

/**
 *_strlen_recursion - Returns the length of a string using recursion.
 *@s: The string for which the length is to be determined.
 *
 *Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
