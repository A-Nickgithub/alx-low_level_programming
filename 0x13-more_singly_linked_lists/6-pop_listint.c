#include "lists.h"

/**
 * pop_listint - deletes the node pointed by head and find the
 * value in that node
 * @head: the pointer to head pointer
 *
 * Return: The value held in the node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *hld;
	int value;

	hld = *head;
	value = hld->n;
	tmp = hld->next;
	free(hld);
	*head = tmp;
	return (value);
}
