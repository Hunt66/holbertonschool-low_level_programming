#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 *list_len- returns the number of elemants in a linked list type list_t
 *@h: the input list
 *Return: number of elemants in said list
 */


size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (list_len(h->next) + 1);
}
