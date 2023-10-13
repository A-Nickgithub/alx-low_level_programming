#include <stdio.h>

/**
 *is_leap_year - Determines if a year is a leap year.
 *@year: The year to check
 *
 *Return: 1 if it's a leap year, 0 otherwise
 */

int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	return (1);
	else
	return (0);
	}
/**
 *main - Entry point of the program
 *
 *This function tests if February 29, 2000, is a leap year.
 *
 *Return: Always 0 (success)
 */
	int main(void)
{
	int year = 2000;
	int month = 2;
	int day = 29;

	if (is_leap_year(year))
	{
	printf("%04d-%02d-%02d is a leap year.\n", year, month, day);
	}
	else
	{
	printf("%04d-%02d-%02d is not a leap year.\n", year, month, day);
	}
	return (0);
}
