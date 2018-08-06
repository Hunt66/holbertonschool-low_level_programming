#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 *add_nodeint_end- add a new node to the end of a listint_t
 *@head: head of list_t
 *@n: int to be added as node
 *Return: address of new element or NULL if fails
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current;

	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	new->n = n;

	current->next = new;

	return (*head);
}
