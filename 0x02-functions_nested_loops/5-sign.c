#include "main.h"

/**
 *print_sign - to check if a number is bigger, smaller or equal to 0
 *@n: this will be used to make the check
 *
 *Return: Always an integer value
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
