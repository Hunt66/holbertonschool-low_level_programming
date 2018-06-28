#include "holberton.h"
/**
 *print_triangle - accepts an int
 *                 prints a triangle
 *                 made of # s of that
 *                 size
 *@size: accepted int
 *
 *
 */

void print_triangle(int size)
{
	int i, p, j;

	i = 0;
	p = 0;
	if (size > 0)
	{
		while (i < size)
		{
			p = size - 1;
			while (i < p)
			{
				_putchar(' ');
				p--;
			}
			for (j = i ; j >= 0 ; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
