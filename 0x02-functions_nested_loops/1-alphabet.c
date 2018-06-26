# include "holberton.h"


/**
 * print_alphabet - accepts void
 *                  returns 0
 *                  prints alphabet
 *
 * Return: alwayse 0
 *
 * does-prints lower alphabet
 */


void print_alphabet(void)
{
	int i;

	for(i = 'a';i <= 'z';i++)
		_putchar(i);
	_putchar('\n');
}
