#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - we will concatenate s1 and s2 to form 1 string
 *   but the s2 string will only add n bytes of it
 *   and of couse we will store the resultant string in a dynamically
 *   *   allocated memory.
 *
 * @s1: The string to concatenated to
 * @s2: The string that we will add to s1
 * @n: The number of bytes of s2 that will be added to s1
 * Return: the pointer to the D-ALLOC-mem containig the resultant string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	    char *result;
	    unsigned int length1 = 0, length2 = 0, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;

	if (n >= length2)
		n = length2;

	result = (char *)malloc(length1 + n + 1);

	if (result == NULL)
	return (NULL);

	for (a = 0; a < length1; a++)
		result[a] = s1[a];

	for (b = 0; b < n; a++, b++)
		result[a] = s2[b];

	result[a] = '\0';
	return (result);
}

