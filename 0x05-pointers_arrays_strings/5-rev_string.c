#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - it will be used to reverse astring
 *@s: the string to be reversed is passed here
 *
 *Return: void
 */
void rev_string(char *s)
{
	int a;
	int length;
	char temp;
	int length2;

	length2 = strlen(s) / 2;
	length = strlen(s) - 1;
	for (a = 0; a < length2; a++)
	{
	temp = s[a];
	s[a] = s[length];
	s[length--] = temp;
	}
}
