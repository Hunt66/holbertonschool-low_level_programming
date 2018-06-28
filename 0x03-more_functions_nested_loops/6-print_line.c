#include "holberton.h"
/**
 *print_line - accepts an int
 *             prints that num
 *             of _ chars
 *@n: accepted int
 *
 *
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n >= 0)
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
}
