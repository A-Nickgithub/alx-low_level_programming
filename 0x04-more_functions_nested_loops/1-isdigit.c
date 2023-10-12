#include "main.h"
#include <stdio.h>

/**
 *_isdigit - to check if it is a digit
 *@c: the value to be passed
 *
 *Return: Always an integer
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
