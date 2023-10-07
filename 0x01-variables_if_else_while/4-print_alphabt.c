#include <stdio.h>
#include<stdlib.h>
/**
 *main - entry point
 * description - program that prints alphabets in lowercase
 *
 *Return: Always 0.
 */
int main(void)
{
	char chara;

	for (chara = 'a'; chara <= 'z'; chara++)
		if (chara != 'e' && chara != 'q')
			putchar(chara);
	putchar('\n');
	return (0);
}






