#include "main.h"

/**
 *_isalpha - to find only aphabets
 *@c: where it will be checked from
 *
 *Return: always a value
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
