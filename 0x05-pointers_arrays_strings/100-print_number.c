#include"holberton.h"


/**
 *print_number- prints an intiger
 *@n: intiger to be printed
 *Return: void
 */



void print_number(int n)
{
	int inc, hold, cnt, prt;
	unsigned int prt2;

	prt2 = 1;
	prt = 1;
	hold = 1;
	inc = 1;
	cnt = 1;
	if (n < 0)
	{
		_putchar('-');
	}
	while (1)
	{
		hold = n / inc;
		if (hold == 0)
			break;
		inc = int_pow(10, cnt);
		cnt++;
	}
	if (n >= 0)
	{
		prt = (n / int_pow(10, cnt - 2));
		_putchar(prt + '0');
	}
	else
	{
		prt = (n / int_pow(10, cnt - 2));
		prt2 = prt * -1;
		_putchar(prt2 + '0');
	}
	cnt = cnt - 3;
	if (n >= 0)
	{
		for (cnt = cnt ; cnt > 0 ; cnt--)
		{
			prt = ((n / int_pow(10, cnt)) % 10);
			_putchar(prt + '0');
		}
	}
	else
	{
		for (cnt = cnt ; cnt > 0 ; cnt--)
		{
			prt = ((n / int_pow(10, cnt)) % 10);
			prt2 = prt * -1;
			_putchar(prt2 + '0');
		}
	}
	if (n != 0)
	{
		if (n >= 0)
		{
			prt = n % 10;
			_putchar(prt + '0');
		}
		else
		{
			prt = n % 10;
			prt2 = prt * -1;
			_putchar(prt2 + '0');
		}
	}
}



/**
 *int_pow- gets the power of two ints
 *@x: base
 *@y: power of this number
 *Return: power of these nums in int form
 */

int int_pow(int x, int n)
{
	int p;

	for (p = 1 ; n > 0 ; --n)
		p = p * x;
	return (p);
}
