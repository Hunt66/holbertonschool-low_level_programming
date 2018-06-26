# include "holberton.h"

/**
 * _abs - accepts int
 *              returns absolute value
 *@n: input int
 * Return: alwayse absolute value
 *
 */



int _abs(int n)
{
	int i;

	if (n > 0)
		i = n;
	if (n == 0)
		i = n;
	if (n < 0)
		i = (n * -1);
	return (i);
}
