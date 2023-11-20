#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a linked list
 * @head: pointer to the head pointer
 * @n: The element to be in the node
 *
 * Return: pointer to the first node which we've created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	const int value = n;
	listint_t *holder;

	holder = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = value;
	new->next = holder;
	*head = new;
	return (*head);
}
