
 #include "lists.h"
 #include <stdio.h>
 #include <stdlib.h>

 /**
  * print_listint_safe -Prints the elements of a linked list (safe version)
  * @head: Pointer to the head of the linked list
  * Return: Number of nodes in the list
  *
  * This function prints the address and value of each node in the linked list.
  * It includes a safety mechanism to detect potential infinite loops and stops
  * printing if the loop is detected.
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t  *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	if (head == NULL)
	{
		fprintf(stderr, "Error: head is NULL\n");
		exit(98);
	}

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next;

		if (slow == fast)
		{
			printf("Infinite loop detected, stopping the printing.\n");
			exit(98);
		}
	}
	return (count);
}
