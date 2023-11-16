#include "lists.h"

/**
 * add_node - add a new node at the beginning of the list
 * @head: the adress of the head
 * @str: the string in the new node
 *
 * Return: the pointer to the new node which now becomes
 * the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptrhead;
	list_t *newhead;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (!n)
	{
		return (NULL);
	}
	ptrhead = *head;
	*head = n;
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = ptrhead;
	newhead = *head;

	return (newhead);
}
