# include "holberton.h"

/**
 * jack_bauer - accepts void
 *              prints all munutes
 *              followed by new line
 * Return: alwayse 0
 *
 */



void jack_bauer(void)
{
	int i;
	int j;
	int a;
	int b;
	int c;
	int d;

	for (i = 0 ; i <= 23 ; i++)
	{
		for (j = 0 ; j <= 59 ; j++)
		{
			a = '0' + (i / 10);
			b = '0' + (i % 10);
			c = '0' + (j / 10);
			d = '0' + (j % 10);
			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			_putchar('\n');
		}
	}
}
