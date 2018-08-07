#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *test_current- tests to see if current node has been printed before
 *@head: the head of tester list
 *@test: node to be tested
 *Return: -1 if match exists 0 elsewize
 */

int test_current(listsize_t *head, const listint_t *test)
{
	size_t size;



	if (head == NULL)
		return (0);

	size = head->n;
	if (size == (size_t)test)
		return (-1);

	if (head == NULL)
		return (0);

	head = head->next;

	return (test_current(head, test));
}

/**
 *add_nodesize- add a new node to the beginning of a listsize_t
 *@head: head of listsize_t
 *@n: size_t to be added as node
 *Return: address of new element or NULL if fails
 */


listsize_t *add_nodesize(listsize_t **head, const size_t n)
{
	listsize_t *new = malloc(sizeof(listsize_t));


	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}

	new->n = n;


	new->next = *head;
	*head = new;
	return (*head);
}






/**
 *print_listint_safe- prints a listint_t safly
 *@head: the head of the list to be printed
 *Return: the number of nodes in the list
 *exit 98: if fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	listsize_t *new_head = NULL;
	listsize_t *stor_current = malloc(sizeof(listint_t));

	if (stor_current == NULL)
		exit(98);



	stor_current->n = (size_t)head;
	new_head = stor_current;
	for (count = 0 ; head->next != NULL ; count++)
	{


		if (test_current(new_head, head->next) == -1)
			exit(98);






		printf("[%p] %d\n", (void*)head, head->n);
		head = head->next;

		add_nodesize(&new_head, (size_t)head);


	}

	printf("[%p] %d\n", (void*)head, head->n);


	return (count + 1);
}
