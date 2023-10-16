#include "main.h"
#include <stdio.h>

/**
 *puts_half - prints half of the string
 *@str: the string will be passed here
 *
 *Return: Always 0;
 */
void puts_half(char *str)
{
	int length;
	int a;

	length = 0;
	while (str[length] != '\0')
	{
	length++;
	}
	if (length % 2 == 0)
	{
	a = length / 2;
	while (length > a)
	{
	putchar(str[a]);
	a++;
	}
	}
	else
	{
	a = (length + 1) / 2;
	while (length > a)
	{
	putchar(str[a]);
	a++;
	}
	}
	putchar('\n');
}
