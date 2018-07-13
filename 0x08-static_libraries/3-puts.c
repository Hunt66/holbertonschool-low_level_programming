#include"holberton.h"

/**
 *_puts - prints a string followed by a new line
 *@s: pointer to string to be printed
 *Return: void
 */


void _puts(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts(s);
}
