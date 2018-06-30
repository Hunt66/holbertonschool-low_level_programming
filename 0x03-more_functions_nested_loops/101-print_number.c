#include "holberton.h"
#include <math.h>

/**
 * print_number(int n) - This funciton will print any input int n
 *@n: n is the input int that will print
 *Return:void
 */

void print_number(int n)
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
		inc = pow(10, plc) / 1;
	}
	_putchar(n / (pow(10, plc) / 1) + '0');
	for (y = plc ; y > 0 ; y--)
	{
		prt = n / (pow(10, (plc - 1)) / 1);
		_putchar((prt % 10) + '0');
	}
}
