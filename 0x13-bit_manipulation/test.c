#include "holberton.h"


/**
 *print_binary- prints a binary representation of base 10 number
 *@n: unsigned long int to be converted
 *Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div;
	unsigned long int  msk = 1024;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (div = 1 ; div <= n ; div = div << 1)
		;

	for (div = div >> 1 ; div > 1 ; div = div >> 1)
	{
		if (n & msk)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
		msk = msk >> 1;
	}
	if (n & msk)
		_putchar('1');
	else
		_putchar('0');
}

	/*for (i = 0 ; i < 32; i++)
	{
		if (n & msk)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
			_putchar('0');
		msk = msk >> 1;
	}
	if (n & msk)
		_putchar('1');
	else
	_putchar('0');*/
