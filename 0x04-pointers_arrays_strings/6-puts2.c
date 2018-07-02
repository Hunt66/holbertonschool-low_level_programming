
#include "holberton.h"

/**
 *puts2 - will be same as normal puts (prints string followed by newline)
 *@*str: accepted string pointer
 *Return: void
 */

void puts2(char *str)
{
	int i;
	char *st = str;

	while (st[i] != '\0')
	{
		_putchar(st[i]);
		i= i + 2;
	_putchar('\n');
	}
}
