#include "main.h"

/**
 * binary_to_uint - converts binary number to unsignned integr
 * @b: pointer to astring o f 0 & 1 chars
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, multip = 1;
	int length;

	if (*b == '\0')
	{
		return (0);
	}
	for (length = 0; b[length]; )
	{
		length++;
	}
	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		count += (b[length] - '0') * multip;
		multip *= 2;
	}
	return (count);
}
