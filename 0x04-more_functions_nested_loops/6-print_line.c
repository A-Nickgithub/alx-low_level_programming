#include "main.h"
#include <stdio.h>

/**
 *print_line - to print lines
 *@n: number of times the character "_" shoul be printed
 *
 *Return: ...
 */
void print_line(int n)
{
	int i;
	char c = '_';

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
		putchar(c);
	}
	putchar('\n');
}
