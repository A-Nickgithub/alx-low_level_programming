#include "main.h"
#include <stdio.h>

/**
 *printdouble - will be used to print two digits
 *@n: number
 */
void printdouble(int n)
{
	int a;

	for (a = 0; a < 2; a++)
	{
		int digit;

		if (a == 0)
		{
			digit = n / 10;
		}
		else
		{
			digit = n % 10;
		}
		putchar(48 + digit);
	}
}

/**
 *  * more_numbers - print more
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				printdouble(b);
			}
			else
			{
				putchar(48 + b);
			}
		}
		putchar('\n');
	}
}

