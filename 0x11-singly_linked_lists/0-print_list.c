#include"lists.h"
#include<stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *print_list- prints all elements of a list_t list
 *@h: the list to be printed
 *Return: number of nodes in list
 */


size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
	{
		printf("[%d] ",h->len);
		printf("%s\n", h->str);
	}
	return (print_list(h->next) + 1);
}
