#include "lists.h"

/**
 *add_dnodeint_end - adds a node to the end of a dlistint_t list
 *@head: the head of the list
 *@n: the int of the added node
 *Return: address of node or NULL if fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *runner = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (runner->next != NULL)
		runner = runner->next;

	runner->next = new;
	new->prev = runner;
	return (new);
}
