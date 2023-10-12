#include "main.h"
#include <stdio.h>

/**
 *_isupper - to check whether a value is uppercase
 *@c: the value to be checked
 *
 *Return: alwayys an integer
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
