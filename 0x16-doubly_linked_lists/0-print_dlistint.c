#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *print_dlistint- prints all nodes in a dlistint_t list
 *@h: the head of the dlistint_t
 *Return: the number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
