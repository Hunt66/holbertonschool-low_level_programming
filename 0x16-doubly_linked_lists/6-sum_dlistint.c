#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *sum_dlistint - return the sum of all data in list
 *@head: the head of the dlistint_t
 *Return: the sum of all nodes data
 */


int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int i = 0;

	if (head == NULL)
		return (0);

	while (current->next != NULL)
	{
		i = i + current->n;
		current = current->next;
	}
	i = i + current->n;
	return (i);
}
