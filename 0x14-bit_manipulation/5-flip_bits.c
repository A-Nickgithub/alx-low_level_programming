#include "main.h"

/**
 * flip_bits - returns the number of bits to
 * flip to get from one number to another
 * @n: first unsigned long integer
 * @m: second unsigned long integer
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}

