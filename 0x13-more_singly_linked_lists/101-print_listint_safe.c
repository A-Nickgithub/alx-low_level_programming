#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - Prints the elements
 * of a linked list (safe version)
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (t == h)
		{
			t = h;
			while (t != h)
			{
				nodes++;
				t = t->next;
				h = h->next;
			}
			t = t->next;
			while (t != h)
			{
				nodes++;
				t = t->next;
			}
			return (nodes);
		}
		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}
