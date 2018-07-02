#include"holberton.h"

/**
 * print_rev - prints string in reverse followed by newline
 *@*s: accepted string or array of chars
 *Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0 ; *s != '\0' ; s++)
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
