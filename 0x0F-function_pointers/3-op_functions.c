#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - will be used to return the sum of n + m
 *
 * @n: integer 1
 * @m: integer 2
 * Return: n + m
 */
int op_add(int n, int m)
{
	return (n + m);
}
/**
 * op_sub - return n - m
 * @n: integer 1
 * @m: integer 2
 * Return: n - m
 */
int op_sub(int n, int m)
{
	return (n - m);
}
/**
 * op_mul - return n * m
 * @n: integer 1
 * @m: integer 2
 * Return: n * m
 */
int op_mul(int n, int m)
{
	return (n * m);
}
/**
 * op_div - return n / m
 * @n: integer 1
 * @m: integer 2
 * Return: n / m
 */
int op_div(int n, int m)
{
	return (n / m);
}
/**
 * op_mod - return rem of n / m
 * @n: integer 1
 * @m: integer 2
 * Return: n % m
 */
int op_mod(int n, int m)
{
	return (n % m);
}
