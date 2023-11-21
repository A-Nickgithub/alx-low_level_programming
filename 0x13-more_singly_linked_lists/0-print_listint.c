#include "lists.h"

/**
 * print_listint - print the elements in the list
 * @h: pointer to the first node
 * Description: will return the number of nodes and
 * print the contents of the nodes
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t num = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num++;
	}
	return (num);
}
