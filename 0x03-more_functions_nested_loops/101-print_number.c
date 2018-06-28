#include "holberton.h"
/**
 *print_number - accepts an int
 *               and prints it
 *               using _putchar
 *@n: accepted int
 *
 *Return: void
 */

void print_number(int n)
{
	int a, b, c, d;

	a = n / 1000;
	b = (n / 100) % 10;
	c = (n / 10) % 10;
	d = n % 10;
	if (n < 0)
	{
		_putchar('-');
		if (a < 0)
			_putchar((a * -1) + '0');
		if (b < 0 || a < 0)
			_putchar((b * -1) + '0');
		if (c < 0 || a < 0 || b < 0)
			_putchar((c * -1) + '0');
		_putchar((d * -1) + '0');
	}
	else
	{
		if (a > 0)
			_putchar(a + '0');
		if (b > 0 || a > 0)
			_putchar(b + '0');
		if (c > 0 || a > 0 || b > 0)
			_putchar(c + '0');
		_putchar(d + '0');
	}
}
