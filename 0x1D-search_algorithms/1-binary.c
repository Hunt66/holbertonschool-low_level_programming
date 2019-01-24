#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"



/**
 *binary_help- helper function for binary search tree
 *@array: int array to search
 *@left: the left limit of this rotation
 *@right: the right limit of this rotation
 *@value: value searched for
 *Return: the spot number is int (index) or -1
 */

int binary_help(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	mid = (right - left) / 2 + left;
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	if (right - left == 0 && array[mid] != value)
		return (-1);
	if (right - left == 1)
	{
		if (array[mid] == value)
			return (mid);
		if (array[mid + 1] == value)
			return (mid + 1);
	}
	if (array[mid] >= value)
		right = right - (((right - left) / 2) + 1);
	if (array[mid] < value)
		left = left + ((right - left) / 2) + 1;
	if ((right == 0 || right + 1 == 0) && array[0] != value)
	{
		printf("Searching in array: %d\n", array[0]);
		return (-1);
	}
	return (binary_help(array, left, right, value));
}


/**
 *binary_search- uses a binary search to find a value in an array
 *@array: the sorted int array to be searched
 *@size: size_t size of array
 *@value: the value searched for
 *Return: the spot the number is in or -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_help(array, 0, size - 1, value));
}
