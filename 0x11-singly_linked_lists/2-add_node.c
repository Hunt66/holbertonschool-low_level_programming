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
	char *nstr;
	size_t size;
	int i;


	if (str == NULL)
	{
		nstr = NULL;
		i = 0;
	}
	if (!new)
		return (NULL);
	if (str)
	{
		for (i = 0 ; str[i] ; i++)
			;
		nstr = strdup(str);
	}
	else
		i = 0;
	size = i;
	if (*head == NULL)
	{
		new->str = nstr;
		new->len = size;
		new->next = NULL;
		*head = new;
		return (*head);
	}

	new->str = nstr;
	new->len = size;


	new->next = *head;
	*head = new;
	return (*head);
}
