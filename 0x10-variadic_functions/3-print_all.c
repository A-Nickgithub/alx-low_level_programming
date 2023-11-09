#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: list of types of args passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int n = 0, m = 0;
	char *s;

	va_start(list, format);
	while (format && format[n])
	{
		switch (format[n])
		{
			case 'c':

				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nill)");
				break;
		}
		m = n + 1;
		while (format[m] && (format[n] == 'c' ||
					format[n] == 'i' || format[n] == 'f' || format[n] == 's'))
		{
			if (format[m] == 'c' || format[m] == 'i' ||
					format[m] == 's' || format[m] == 'f')
			{
				printf(", ");
				break;
			}
			m++;
		}
		n++;
	}
	printf("\n");
}
