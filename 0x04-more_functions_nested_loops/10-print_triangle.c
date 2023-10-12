#include "main.h"
#include <stdio.h>

/**
 *print_triangle - print triangle
 *@size: this is the size of the triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int a;
		int b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b > size - 2 - a)
				{
					putchar(35);
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
