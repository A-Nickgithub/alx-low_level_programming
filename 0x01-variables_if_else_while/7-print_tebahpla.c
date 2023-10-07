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
	char chara = 'z';

	while (chara >= 'a')
	{
		putchar(chara);
		chara--;
	}
	putchar('\n');
	return (0);
}
