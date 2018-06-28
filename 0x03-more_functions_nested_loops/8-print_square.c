#include "holberton.h"
/**
 *print_square - accepts an int
 *               prints a square
 *               mad of # the
 *               size of size
 *@size: accepted int size of sq
 *
 *Return: void
 */

void print_square(int size)
{
	int x, y;

	x = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
	if (size <= 0)
		_putchar('\n');
}
