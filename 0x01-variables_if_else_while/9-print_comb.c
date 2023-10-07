#include<stdio.h>
#include<stdlib.h>

/**
 *main - entry point
 *
 *Description
 *Return: Always 0 (success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
