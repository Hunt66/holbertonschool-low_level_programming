#include"holberton.h"


/**
 *print_number- prints an intiger
 *@n: intiger to be printed
 *Return: void
 */

/*void print_number(int n)
{
	int inc, hold, plc;
	int y = 1;
	int prt = 1;

	hold = 1;
	inc = 10;
	plc = 1;
	while (1)
	{
		hold = n / inc;
		if (hold == 0)
			break;
		plc ++;
		inc = int_pow(10, plc);
	}
	_putchar(n / ((int_pow(10, plc)) + '0'));
	plc--;
	for (y = plc ; y > 0 ; y--)
	{
		prt = n / (int_pow(10, y));
		_putchar((prt % 10) + '0');
	}
	}*/

void print_number(int n)
{
	int inc, hold, cnt;

	hold = 1;
	inc = 1;
	cnt = 1;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (1)
	{
		hold = n / inc;
		if (hold == 0)
			break;
		inc = int_pow(10, cnt);
		cnt++;
	}
	_putchar((n / int_pow(10, cnt - 2)) + '0');
	cnt = cnt - 3;
	for (cnt = cnt ; cnt > 0 ; cnt--)
	{
		_putchar(((n / int_pow(10, cnt)) % 10) + '0');
	}
	if (n != 0)
		_putchar((n % 10) + '0');
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
