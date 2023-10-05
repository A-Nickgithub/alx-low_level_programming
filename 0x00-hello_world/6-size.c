#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{       int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of short: %zu bytes\n", sizeof(short));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of long double: %zu bytes\n", sizeof(long double));
	return (0);
}
