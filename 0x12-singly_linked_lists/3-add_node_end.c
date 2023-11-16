#include "lists.h"

/**
 * add_node_end - used to add the node at the end of a list
 * @head: a pointer to the head pointer
 * @str: The string to be in the node
 *
 * Return: A pointer to the first node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *string = strdup(str);
	list_t *n;
	list_t *f;

	if (!string)
	{
		return (0);
	}
	n = malloc(sizeof(list_t));
	if (!n)
	{
		return (0);
	}
	n->str = string;
	n->len = strlen(string);
	n->next = NULL;
	f = get_f(head);
	if (f)
	{
		f->next = n;
	}
	else
	{
		*head = n;
	}
	return (n);
}

/**
 * get_f - get last node of linked list
 *
 * Return: address of the last element
 * @head: head node
 */
list_t *get_f(list_t **head)
{
	list_t *f = *head;

	if (!f)
	{
		return (0);
	}
	while (f->next)
	{
		f = f->next;
	}
	return (f);
}
