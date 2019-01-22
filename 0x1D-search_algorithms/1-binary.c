#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *binary_search- uses a binary search to find a value in an array
 *@array: the sorted int array to be searched
 *@size: size_t size of array
 *@value: the value searched for
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, k, j = 0;

	while (1)
	{
		i = size/2 + j;
		printf("%lu\n", i);
		if (size/2 == 0 && array[i] != value)
			return(-1);
		printf("Searching in array: ");
		for (k = j; k < size + j - 1; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);
		if (array[i] == value)
			return(i);
		if (array[i] < value)
		{
			j = i;
			size = size/2;
		}
		if (array[i] > value)
		{
			size = size/2 - 1;
		}
	}
}
