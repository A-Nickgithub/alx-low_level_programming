#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>
/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int count1, count2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	count1 = atoi(argv[1]);
	op = argv[2];
	count2 = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && count2 == 0) ||
			(*op == '%' && count2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(count1, count2));
	return (0);
}
