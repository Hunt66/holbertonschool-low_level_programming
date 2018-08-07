#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint_safe- prints a listint_t safly
 *@head: the head of the list to be printed
 *Return: the number of nodes in the list
 *exit 98: if fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;


	for (count = 0 ; head->next != NULL ; count++)
	{
		printf("[%p] %d\n", (void*)head, head->n);
		head = head->next;
		if (head == NULL)
			exit(98);
	}

	printf("[%p] %d\n", (void*)head, head->n);


	return (count + 1);
}
