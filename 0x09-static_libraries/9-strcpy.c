#include "main.h"
#include <stdio.h>

/**
 *_strcpy - this function copys a string from src to destination
 *including the null terminator too without using strcpy()
 *@dest: pointer to the destination
 *@src: pointer to the string to be copied
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;
	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
	dest[m] = src[m];
	}
	dest[m] = '\0';
	ptr = dest;
	return (ptr);
}
