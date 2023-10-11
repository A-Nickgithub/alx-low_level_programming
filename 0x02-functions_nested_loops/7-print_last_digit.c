#include "main.h"
#include<stdio.h>
/**
 *print_last_digit - printint the last digit in numerals
 *@a: where to pass the damn digits`:wq
 *
 *Return: Always an integer
 */
int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
