#include "main.h"
#include <stdio.h>

/**
 *print_chessboard - print chessboard to the screen
 *@a: 2-dimension array
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int n;
	int m;

	for (n = 0; n < 8; n++)
	{
	for (m = 0; m < 8; m++)
	{
	putchar(a[n][m]);
	}
	putchar('\n');
	}
}
