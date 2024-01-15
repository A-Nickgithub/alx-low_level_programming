#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *_abs - will be used to convert to absolute values
 *@a: the value where it will be entered
 *
 *Return: Always an integer
 */
int _abs(int a)
{
	if (a <= 0 || a == 0 || a >= 0)
	{
		return (abs(a));
	}
	return (0);
}
