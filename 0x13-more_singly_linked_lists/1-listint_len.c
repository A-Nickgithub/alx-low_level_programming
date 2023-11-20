#include "lists.h"

/**
 * listint_len: claculate the number of elments/nodes
 * @h: pointer to the first node
 *
 * Return: The number of nodes/elemnets
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t num = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		num = num + 1;
	}
	return (num);

}
