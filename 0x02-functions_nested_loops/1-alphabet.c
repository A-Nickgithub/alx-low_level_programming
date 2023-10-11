#include<stdio.h>
#include "main.h"
/**
 *print_alphabet-function to print alphabet in lowercase
 *
 *Return: void
 */
void print_alphabet(void)

{
	char chara;

	for (chara = 'a'; chara <= 'z'; chara++)
	{
		_putchar(chara);
	}
	_putchar('\n');
}
