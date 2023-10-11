#include "main.h"
#include<stdio.h>

/**
 *jack_bauer - print every minute of the day
 *
 *Return: void
 */
void jack_bauer(void)
{
	int m;
	int n;
	int j;
	int p;

	for (m = 0; m <= 2; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((m <= 1 && n <= 9) || (m <= 2 && n <= 3))
			{
				for (j = 0; j <= 5; j++)
				{
					for (p = 0; p <= 9; p++)
					{
						_putchar(m + '0');
						_putchar(n + '0');
						_putchar(58);
						_putchar(j + '0');
						_putchar(p + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
	_putchar('\n');
}
