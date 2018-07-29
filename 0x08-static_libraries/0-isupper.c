#include "holberton.h"
/**
 *_isupper - accepts an int
 *            and checks it for upper case
 *@c: accepted int
 *
 *Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z');
		return (1);
	else
		return (0);
}
