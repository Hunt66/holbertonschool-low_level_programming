#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 *print_listint- prints elements of listint_t list
 *@h: the list to be printed
 *Return: number of nodes
 */




size_t print_listint(const listint_t *h)
{

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (print_listint(h->next) + 1);
}
