#include <unistd.h>
#include <stdlib.h>
/**
* main - multiply the arguments passed in CLI
* and return the results
* @argc: The number of arguments
* @argv: the argument
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	char *p1 = argv[1];
	char *p2 = argv[2];
	unsigned long n1 = 0, n2 = 0, r = 0;

	if (argc != 3)
	{
		write(2, "Error\n", 6);
		return (98);
	}
	while (*p1 && (*p1 >= '0' && *p1 <= '9'))
	{
		n1 = n1 * 10 + (*p1 - '0');
		p1++;
	}
	while (*p2 && (*p2 >= '0' && *p2 <= '9'))
	{
		n2 = n2 * 10 + (*p2 - '0');
		p2++;
	}
	if (*p1 || *p2)
	{
		write(2, "Error\n", 6);
		return (98);
	}

	r = n1 * n2;
	while (r > 0)
	{
		*--p1 = r % 10 + '0';
		r /= 10;
	}
	write(1, p1, argv[1] - p1 + 20);
	return (0);
}

