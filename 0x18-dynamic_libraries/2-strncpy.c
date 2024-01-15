#include "main.h"
#include <stdio.h>

/**
 *_strncpy - copies n characters from the src to the destination
 *@dest: destination string
 *@src: source string
 *@n: number of characters to be copied
 *
 *Return: pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
		int i = 0;

	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
