#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 ** argstostr - this will essentially receive the number of arguments
 ** store the arguments in a space created by malloc and return the arguments
 ** as a pointer to be printed out
 *
 *@ac: this will hold the number of arguments entered during runtime
 *@av: this is the array of the arguments entered
 *
 *Return: The pointer to the space holding the concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	char *arg;
/**
* when returned it will return the address of the space created
* by malloc
*/
	int length = ac;
	int n;
	int m;
	int index = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
		{
			length++;
		}
	}

	arg = (char *)malloc(sizeof(char) * (length + ac) + 1);
	if (arg == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
		{
			arg[index++] = av[n][m];
		}
		arg[index++] = '\n';
	}
	return (arg);
}
