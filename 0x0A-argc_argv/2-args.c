#include <stdio.h>
#include <stdlib.h>

/**
 *main - will be used to print all args passed in CLI
 *@argc: the number of args written
 *@argv: the arg itself
 *
 *Return: Always 0;
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
