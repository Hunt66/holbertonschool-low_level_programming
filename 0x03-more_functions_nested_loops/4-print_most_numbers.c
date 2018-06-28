#include "holberton.h"
/**
 *print_most_numbers - accepts void
 *                     prints numbers
 *                     0 to 9 not including
 *                     2 and 4
 *
 *
 *Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	i = '0';
	while (1)
	{
		if (i > '9')
			break;
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
