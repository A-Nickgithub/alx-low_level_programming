#include "lists.h"

/**
 * sum_listint - calculate the sum of all the node's values
 * @head: pointer to the first node
 *
 * Return: The sum of the values
 */
int sum_listint(listint_t *head)
{
	listint_t *hld;
	int value = 0;

	hld = head;
	if (hld == NULL)
	{
		return (0);
	}
	else
	{
		while (hld != NULL)
		{
			value = value + hld->n;
			hld = hld->next;
		}
	}
	return (value);
}
