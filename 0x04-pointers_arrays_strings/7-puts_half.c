#include"holberton.h"

/**
 *puts_half- prints half of an accepted pointer to string followed by newline
 *@str: accepted string pointer
 *Retrun: void
 */

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i + 1) / 2;
	}
	if (i != 1)
	{
		for (j = j ; j < i ; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
