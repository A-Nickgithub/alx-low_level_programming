#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - to print most of them
 *
 *Return:void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2)
		{
			continue;
		}
		else if (a == 4)
		{
			continue;
		}
		else
			putchar(a + '0');
	}
	putchar('\n');
}
