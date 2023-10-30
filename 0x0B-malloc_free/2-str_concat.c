#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - this will be used to concat two strings and then
 ** store them as one array in a space in heap
 *@s1: the first string
 ** @s2:the second string
 *
 *Return: a pointer to the string.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int n;
	int index = 0;
	int length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (n = 0; s1[n] || s2[n]; n++)
	{
		length++;
	}
	a = malloc(sizeof(char) * length);
	if (a == NULL)
	{
		return (NULL);
	}
	for (n = 0; s1[n]; n++)
	{
		a[index++] = s1[n];
	}
	for (n = 0; s2[n]; n++)
	{
		a[index++] = s2[n];
	}
	return (a);
}
