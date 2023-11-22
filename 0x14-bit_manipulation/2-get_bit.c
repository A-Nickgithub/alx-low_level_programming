#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer
 * @index: index of the bit to retrieve (starting from 0)
 *
 * Return: value of the bit at the specified index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((int)((n >> index) & 1));
}
