#include"holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonas of a
 *                 square matrix of ints
 *@a: accepted matrix pointer
 *@size: size of diagonal
 *Return: void
 */


void print_diagsums(int *a, int size)
{
	int i, j, s;

	s = 0;
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
			{
				a = a + (i * size) + j;
				s = s + *a;
				a = a - (i * size) - j;
			}
		}
	}
	printf("%d, ", s);
	s = 0;
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == (size - 1) - j)
			{
				a = a + (i * size) + j;
				s = s + *a;
				a = a - (i * size) - j;
			}
		}
	}
	printf("%d\n", s);
}
