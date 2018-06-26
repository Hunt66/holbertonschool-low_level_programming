# include "holberton.h"

/**
 * print_last_digit - accepts int
 *
 *@n: input int
 * Return: alwayse last digit
 *
 */



int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	if (i < 0)
	{
		_putchar('0' + (i * -1));
		return (i * -1);
	}
	else
	{
		_putchar('0' + i);
		return (i);
	}
}
