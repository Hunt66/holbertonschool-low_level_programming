#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *get_nodeint_at_index- returns the nth node of a list
 *@head: head of linked list
 *@index: desired index to return
 *Return: NULL if that node does not exist or that node
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	for (i = 0 ; i < index ; i++)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}

	if (current == NULL)
		return (NULL);
	return (current);
}
