# include "holberton.h"

/**
 * print_sign - accepts int
 *                  returns 0, -1 or 1
 *                  0 if 0
 *                  1 if posative
 *                 -1 if negative
 *                  prints sign
 * @n: int took for checking
 *
 * Return: alwayse 0 jk stated above
 *
 */



int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}
