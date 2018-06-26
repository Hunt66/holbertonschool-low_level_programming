# include "holberton.h"

/**
 * print_alphabet_x10 - accepts void
 *                  returns 0
 *                  prints alphabet 10 times
 *
 * Return: alwayse 0
 *
 * does-prints lower alphabet 10 times
 */



void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = '0' ; j <= '9' ; j++)
	{
		for (i = 'a' ; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
