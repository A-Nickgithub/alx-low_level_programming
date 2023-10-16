#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers
 *@a: this is where the array will be passed
 *@n:the number of elements
 *
 *Return: void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
	if (m != n - 1)
	{
	printf("%d, ", a[m]);
	}
	else
	{
	printf("%d", a[m]);
	}
	}
	putchar('\n');
}
