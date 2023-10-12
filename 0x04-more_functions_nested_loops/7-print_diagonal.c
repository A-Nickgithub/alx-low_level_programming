#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - diagonal line
 *@n: number of time '//should be printed
 *
 *Return:void
 */
void print_diagonal(int n)
{
	if (n > 1)
	{
		int a;
		int b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a == b)
				{
					putchar(92);
				}
				if (b < a)
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
