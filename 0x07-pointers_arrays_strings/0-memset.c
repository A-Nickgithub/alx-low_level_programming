#include "main.h"
#include <stdio.h>

/**
 *_memset: main function of the prototype
 *@b: the constant value to be passed
 *@s: the address of the memory area
 *@n: the number of bytes of the memory
 *
 *Return: The area pointed by s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	s[m] = b;
	return (s);
}
