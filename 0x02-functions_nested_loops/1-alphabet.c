# include <stdio.h>
# include "holberton.h"
# include "_putchar.c"

/**
 * main- entry point accepts nothing
 *       returns 0
 *
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
	char i;

	for(i = 'a';i <= 'z';i++)
		_putchar(i);
	_putchar('\n');
	return(0);
}
