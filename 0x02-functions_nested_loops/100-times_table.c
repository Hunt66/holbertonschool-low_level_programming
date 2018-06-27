# include "holberton.h"

/**
 * print_times_table - accepts int
 *                     prints multiplication table to the int
 *                     followed by new line
 * Return: alwayse 0
 *
 */



void print_times_table(int n)
{
	int a,b,c,x,y,z;
	if (n <= 15 && n > 0)
	{
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				c = a * b;
				x = c / 100;
				y = (c / 10) % 10;
				z = c % 10;
				if (x > 0)
					_putchar('0' + x);
				else if (b != 0)
					_putchar(' ');
				if (y >= 0 && c >= 10)
					_putchar('0' + y);
				else if (b != 0)
					_putchar(' ');
				_putchar(z + '0');
				if (b == n)
					break;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
