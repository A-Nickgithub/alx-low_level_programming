#include "lists.h"

/**
 * free_listint - will be used to free the linked list
 * @head: The pointer to the first node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *hld;

	hld = head;
	while (hld != NULL)
	{
		tmp = hld;
		hld = hld->next;
		free(tmp);
	}
}
