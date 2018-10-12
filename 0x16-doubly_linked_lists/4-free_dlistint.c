#include "lists.h"

/**
 *free_dlistint - frees all nodes in a dlistint_t list
 *@head: the head of the list to be freed
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
