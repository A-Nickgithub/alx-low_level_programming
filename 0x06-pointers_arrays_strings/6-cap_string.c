#include "main.h"
#include <stdio.h>

/**
 *cap_string - capitalizes every word on a string
 *@s: the string to be passed
 *
 *Return: The capitalized string
 */
char *cap_string(char *s)
{
	int k;
	int r;
	int size;


	char sep[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	size = sizeof(sep) / sizeof(sep[0]);
	if (s[0] >= 'a' && s[0] <= 'z')
	{
	s[0] = s[0] - 32;
	}
	for (k = 0; s[k] != '\0'; k++)
	{
	char ch = s[k];

	for (r = 0; r < size; r++)
	{
	if (ch == sep[r] && s[k + 1] >= 'a' && s[k + 1] <= 'z')
	{
	s[k + 1] = s[k + 1] - 32;
	break;
	}
																							}
	}
	return (s);
	putchar('\n');
}
