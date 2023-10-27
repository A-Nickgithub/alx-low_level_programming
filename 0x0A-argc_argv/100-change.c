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
	int cents;
	int coin_total = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int coin_count = sizeof(coins) / sizeof(coins[0]);
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < coin_count; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_total++;
		}
	}
	printf("%d\n", coin_total);
	return (0);
}

