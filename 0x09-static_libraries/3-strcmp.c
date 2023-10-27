#include "main.h"

/**
 *_strcmp - The main function
 *
 *@s1: Function parameter
 *
 *@s2: Function parameter
 *
 *Return: s1, s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}

