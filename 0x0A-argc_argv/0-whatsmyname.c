#include <stdio.h>
/**
 * main - to give us the name of the program
 *@argc: the number of the argument passed in the cli
 *@argv: the pointer to the string passed
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("Program name: %s\n", argv[0]);
	}
	else
	{
		printf("Unable to determine the program name.\n");
	}
	return (0);
}

