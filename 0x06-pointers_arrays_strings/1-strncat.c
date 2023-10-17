#include "main.h"

/**
 *_strncat  - the main function
 *
 *@n: Function parameter
 *
 *@src: Function parameter
 *
 *@dest: Function parammeter
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

