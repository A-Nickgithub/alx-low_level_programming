#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Declaration: 'Programs description'
 * Return: Always 0
 */

int main(void)
{
	char chara;

	for (chara = 'a'; chara <= 'z'; chara++)
		putchar(chara);
	for (chara = 'A'; chara <= 'Z'; chara++)
		putchar(chara);
	putchar('\n');
	return (0);
}
