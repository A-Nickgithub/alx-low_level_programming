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
	char chara = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
		while (chara <= 'f')
		{
			putchar(chara);
			chara++;
		}
		putchar('\n');
		return (0);
}
