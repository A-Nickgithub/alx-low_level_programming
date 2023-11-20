#include "lists.h"

/**
 * free_listint2 - used to free a ll and set head to NULL
 * @head: pointer to head pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *hld;

	hld = *head;
	while (hld != NULL)
	{
		tmp = hld;
		hld = hld->next;
		free(tmp);
	}
	*head = NULL;
}
