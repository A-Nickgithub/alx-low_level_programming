#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Description-prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
