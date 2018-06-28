#include "holberton.h"
/**
 *print_diagonal - accepts an int
 *                 prints that num
 *                 of \ chars in
 *                 diagonal
 *@n: accepted int
 *
 *
 */

void print_diagonal(int n)
{
	int i, p;

	i = 0;
	p = 0;
	if (n >= 0)
	{
		while (i < n)
		{
			p = 0;
			while (i > p)
			{
				_putchar(' ');
				p++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
