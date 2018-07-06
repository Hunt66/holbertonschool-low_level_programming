#include"holberton.h"

/**
 *reverse_array- reverses the contents of an array of ints
 *@a: the array of ints pointer
 *@n: number of elements in of array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	tmp = 0;
	n--;
	for (i = 0 ; i < n ; i++)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
		n--;
	}
}
