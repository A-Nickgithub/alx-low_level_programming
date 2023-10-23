#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print sum of two diagonals
 *@a: array
 *@size: size of array
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int n;

	count1 = 0;
	count2 = 0;
	for (n = 0; n < size; n++)
	{
	int n1 = n + size * n;
	int n2 = size * (n + 1) - (n + 1);

	count1 = count1 + a[n1];
	count2 = count2 + a[n2];
	}
	printf("%d, %d\n", count1, count2);
}
