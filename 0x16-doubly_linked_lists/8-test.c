#include "lists.h"

/**
 *back_print - prints the list backwards using prev
 *@head: head of list
 *Return: void
 */

void back_print(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	while (current->prev != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}
	printf("%d\n", current->n);
}
