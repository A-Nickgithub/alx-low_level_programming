#include <stdio.h>
#include "main.h"

/**
 *_memcpy - used to copy n bytes from src to dest
 *@dest: destination
 *@src: source of data
 *@n: the number of bytes to be copied
 *
 *Return: pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
	dest[m] = src[m];
	}
	return (dest);
}
