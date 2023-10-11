#include<stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - print out alphabet 10 times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char chara;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (chara = 'a'; chara <= 'z'; chara++)
		{
			_putchar(chara);
		}
		_putchar('\n');
	}
}
