#include "main.h"
/**
 * print_number - Prints an integer digit by digit
 *@n: The integer to be printed
 */

void print_number(int n)
{
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
* main - Entry point of the program
*
*Description: Calculates and prints sum of all multiples of 3 or 5 below 1024
*
*Return: Always 0 (success)
*/
int main(void)
{
	int sum = 0;

	for (int i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	print_number(sum);
	_putchar('\n');
	return (0);
}

