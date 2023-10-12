#include "main.h"
#include <stdio.h>

/**
 *print_numbers - from 0 to 9
 *
 *Return:void
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
