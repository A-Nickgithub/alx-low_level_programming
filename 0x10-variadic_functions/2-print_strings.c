#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string separator
 * @n: number of args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		char *s = va_arg(list, char *);

		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nill)");
		}
		if (a == n - 1)
		{
			break;
		}
		if (separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
