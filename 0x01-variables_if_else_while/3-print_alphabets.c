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
	char chara = 'a';
	char chara2 = 'A';

	while (chara <= 'z')
		putchar(chara);
	chara++;
	while (chara2 <= 'Z')
		putchar(chara2);
	chara2++;
	putchar('\n');
	return (0);
}
