# include "holberton.h"

/**
 * times_table - accepts void
 *              prints multiplication table to 9
 *              followed by new line
 * Return: alwayse 0
 *
 */



void times_table(void)
{
	int i;
	int j;
	int q;
	int a;
	int b;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			q = (i * j);
			a = ('0' + (q / 10));
			b = ('0' + (q % 10));
			if (a > '0')
				_putchar(a);
			else if (j != 0)
				_putchar(' ');
			_putchar(b);
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
