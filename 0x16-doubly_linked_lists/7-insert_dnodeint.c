#include "lists.h"

/**
 *insert_dnodeint_at_index - adds a node at a given index
 *@h: the head of the given list
 *@idx: the index to put the node
 *@n: the int value of that node
 *Return: the address of input node or NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current = *h;
	dlistint_t *nxt = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return(new);
	}
	if (*h == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
		nxt = nxt->next;
		if (current == NULL)
			return (NULL);
	}

	if (nxt->next != NULL)
	{
		nxt = nxt->next;
		nxt->prev = new;
		new->next = nxt;
	}
	current->next = new;
	new->prev = current;
	return (new);
}
