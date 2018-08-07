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

	if (head->n == 0)
		return (0);
	size = head->n;
	if (size == (size_t)test)
		return (-1);
	head = head->next;
	if (head == 0)
		return (0);
	return (test_current(head, test));
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
	listsize_t *new_head;
	listsize_t *stor_current = malloc(sizeof(listint_t));

	if (stor_current == NULL)
		exit(98);


	printf("test1\n");
	new_head = stor_current;
	stor_current->n = 0;
	for (count = 0 ; head->next != NULL ; count++)
	{
		printf("test%d\n", (int)count + 1);

		if (test_current(new_head, head) == -1)
			exit(98);

		stor_current->n = (size_t)head;

		printf("[%p] %d\n", (void*)head, head->n);
		head = head->next;
		stor_current = stor_current->next;
	}
	printf("out of loop\n");
	printf("[%p] %d\n", (void*)head, head->n);


	return (count + 1);
}
