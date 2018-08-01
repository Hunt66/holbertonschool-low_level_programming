#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 *add_node- add a new node to the beginning of a list_t
 *@head: head of list_t
 *@str: string to be added as node
 *Return: address of new element or NULL if fails
 */


list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new = malloc(sizeof(struct list_s));
	char *nstr = strdup(str);
	size_t size;
	int i;

	if (!new)
		return (NULL);
	for (i = 0 ; nstr[i] ; i++)
		;
	size = i;

	new->str = nstr;
	new->len = size;

	new->next = *head;
	*head = new;
	return (*head);
}
