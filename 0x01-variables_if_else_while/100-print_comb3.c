#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 *main - Entry point
 *
 *Description
 *Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int n;

	for (a = '0'; a <= '9'; a++)
	{
		for (n = '0'; n <= '9' ; n++)
		{
			if (a < n)
			{
				putchar(a);
				putchar(n);
				if (a < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
