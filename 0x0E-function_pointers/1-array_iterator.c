#include "function_pointers.h"
#include <stdlib.h>



/**
 *array_iterator - exicures a function on every elament in an imput array
 *@array: input array
 *@size: size of array
 *@action: action function does on array
 *Return: Void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0 || array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
