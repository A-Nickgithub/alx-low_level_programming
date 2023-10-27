#include <stdio.h>
#include <stdlib.h>

/**
 *main - add positive integers and return the result
 *@argc: the number of argument
 *@argv: the argument
 *
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int null = 0;
	char y[] = "Error";
	int m;
	int sum = 0;

	if (argc == 0)
	{
		printf("%d\n", null);
	}
	for (m = 1; m < argc; m++)
	{
		if (*argv[m] >= 'a' && *argv[m] <= 'z')
		{
			printf("%s\n", y);
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[m]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
