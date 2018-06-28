#include "holberton.h"
/**
 *more_numbers - accepts void
 *               prints numbers
 *               0 to 14 not including
 *               10 times
 *
 *Return: nothing
 */

void more_numbers(void)
{
	int i;
	int c;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (1)
		{
			if (i > 14)
				break;
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		c++;
	}
}
