#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at the specified location
 * @head: pointer to the pointer of start of the list
 * @idx: The position the node is inserted
 * @n: The value the node will contain
 *
 * Return: the address to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int value = n;
	listint_t *holder = *head;
	unsigned int index = idx;
	listint_t *newnode;
	unsigned int m = 1;

	while (m <= index - 1)
	{
		holder = holder->next;
		m++;
	}
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	else
	{
		newnode->n = value;
		newnode->next = holder->next;
		holder->next = newnode;
	}
	return (holder);
}

