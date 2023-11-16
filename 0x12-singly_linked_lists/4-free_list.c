#include "lists.h"

/**
 * free_list - free a list
 * @head: the head pointer to a node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *n = head;

	while (n)
	{
		free(n->str);
		n = n->next;
	}
	while (head)
	{
		list_t *temp = head;

		head = head->next;
		free(temp);
	}
}
/**
 * get_last_node - get the last node of a linked list
 *
 * Return: address of the last element
 * @head: head node
 */
list_t *get_last_node(list_t *head)
{
	list_t *last = head;

	if (!last)
	{
		return (0);
	}
	while (last->next)
	{
		last = last->next;
	}
	return (last);
}
