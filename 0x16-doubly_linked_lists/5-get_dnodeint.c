#include  "lists.h"

/**
 *get_dnodeint_at_index - returns a node at given index
 *@head: head of list
 *@index: index of node to return
 *Return: the node specified or NULL if does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	return (current);
}
