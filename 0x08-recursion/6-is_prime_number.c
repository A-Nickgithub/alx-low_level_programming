#include "main.h"
#include <stdio.h>

/**
 *is_prime_number - return prime numbers only
 *@n: number passed
 *
 *Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 *_prime - find prime number
 *@n: number
 *@i: iteration
 *
 *Return: 1 if prime 0 otherwise
 */
int _prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	return (_prime(n, i + 1));
}
