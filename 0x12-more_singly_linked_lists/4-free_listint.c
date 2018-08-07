#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 *free_listint- frees listint_t
 *@head: head of listint_t
 *Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}

}
