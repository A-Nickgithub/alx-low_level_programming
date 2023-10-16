#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts2 - used to find every other character
 *@str: the string to be passed here
 *
 *Return : void
 */

void puts2(char *str)
{
	int a;
	int length;

	length = strlen(str);
	for (a = 0; a < length; a += 2)
	{
	putchar(str[a]);
	}
	putchar('\n');
}
