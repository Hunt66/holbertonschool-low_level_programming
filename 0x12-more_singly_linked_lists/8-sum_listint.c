#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *sum_listint- returns sum of all n values in a listint_t
 *@head: head of listint_t
 *Return: 0 if list is empty or sum if not
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	while (current->next != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	sum += current->n;
	return (sum);
}
