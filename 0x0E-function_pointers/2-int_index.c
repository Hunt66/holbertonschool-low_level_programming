#include "function_pointers.h"
#include <stdlib.h>


/**
 *int_index - searches for an integer
 *@array: input array to search for search
 *@size: size of array
 *@cmp: pointer to function that compairs values
 *Return: index of first elament which cmp returns not 0 -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
