#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - this function prints a string it in reverse
 *@s: will be used to store the string
 *
 *Return: void
 */
void print_rev(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
	count++;
	for (a = count - 1; a >= 0 ; a--)
	putchar (s[a]);
	putchar ('\n');
}
