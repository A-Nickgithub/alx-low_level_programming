#include "main.h"

/**
 *_sqrt_recursion - Calculates the natural square root of a number.
 *
 *@n: The number for which to calculate the square root.
 *
 *Return: The natural square root of 'n', or -1 if 'n'
 *does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_recursive(n, 1));
}

/**
*sqrt_recursive - Helper function to find the square root using recursion.
*@n: The number for which to calculate the square root.
*@guess: The current guess for the square root.
*
* Return: The natural square root of 'n', or -1 if not found.
*/
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursive(n, guess + 1));
	}
}
