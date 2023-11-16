#include "lists.h"

/**
 * list_len -to calculate the number of elements/nodes in a linked list
 * @h: The  header pointer
 *
 * Return: return the number of elemensts/nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	unsigned int n = 0;

	ptr = h;
	while (ptr)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}

