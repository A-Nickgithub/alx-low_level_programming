#include "main.h"
#include <stdio.h>

/**
 *print_square - will print square
 *@size: the size of the square
 *
 *Return:void
 */
void print_square(int size)
{
	if (size > 1)
	{
		int a;
		int b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
