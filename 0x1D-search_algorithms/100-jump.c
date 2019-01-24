#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 *jump_search- uses jump search to find an elament in an array
 *@array: the array to search
 *@size: size_t size of array
 *@value: the value looked for
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size), j;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       i - jump, i);
			for (j = i - jump; j <= j + jump; j++)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       j, array[j]);
				if (array[j] == value)
					return (j);
			}
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = i + jump;
	}
	return (-1);
}
