#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the number of arguments
 *@argc: the number of arguments
 *@argv: the argument passed
 *
 *Return: Always 0
 */
int main(int argc, __attribute((unused))char *argv[])
{
	int i = 0;

	while (argc)
	{
		argv--;
		argc--;
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
