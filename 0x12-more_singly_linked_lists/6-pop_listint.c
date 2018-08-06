#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *pop_listint- deletes head node of a listint_t and
 *             returns the head node's data
 *@head: the head node of listint_t
 *Return: 0 if empty or the data in n of list_t input
 */


int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int i;

	if (!head)
		return (0);

	i = (*head)->n;
	new_head = *head;
	*head = (*head)->next;
	free(new_head);
	return (i);
}
