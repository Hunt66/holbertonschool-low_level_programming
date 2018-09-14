#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes a given node of a listint_t list at index
 *@head: the head of the list
 *@index: the given index of the node to be deleted
 *Return: 1 if success 0 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *hold = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->next != NULL)
		{
			*head = current->next;
			free(current);
			(*head)->prev = NULL;
		}
		else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	if ((*head)->next == NULL && index != 0)
		return (-1);
	for (i = 0; i < index - 1; i++)
	{
		current = current->next;
		if (current->next == NULL)
			return (-1);
	}
	if (current->next->next != NULL)
	{
		hold = current->next->next;
		hold->prev = current;
		free(current->next);
		current->next = hold;
	}
	else
	{
		free(current->next);
		current->next = NULL;
	}
	return (1);
}
