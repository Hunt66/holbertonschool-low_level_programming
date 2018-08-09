#include "holberton.h"


/**
 *print_binary- prints a binary representation of base 10 number
 *@n: unsigned long int to be converted
 *Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (div = 1 ; div <= n ; div = div * 2)
		;
	for (div = div / 2 ; div > 1 ; div = div / 2)
	{
		_putchar((n / div) + '0');
		n = (n % div);
	}
	_putchar((n / div) + '0');
}
