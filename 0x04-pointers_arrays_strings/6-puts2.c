#include "holberton.h"

/**
 *puts2 - prints one char out of 2 of a string, followed by a new line.
 *@str: accepted string pointer
 *Return: void
 */

void puts2(char *str)
{
	int i, j;

	while (str[j] != '\0')
	{
		++j;
	}
	if (j % 2 != 0)
		j = j - 1;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
		if (i > j)
			break;
	}
	_putchar('\n');
}
