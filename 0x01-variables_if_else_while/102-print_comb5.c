#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *main -Entry
 *
 *Description'
 *Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '1'; d <= '9'; d++)
				{
					if (a < c && b < d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (a <= '8')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
