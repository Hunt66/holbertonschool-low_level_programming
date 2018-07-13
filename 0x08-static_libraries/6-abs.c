#include "holberton.h"

/**
 *_abs - finds the absolute value of an int
 *@n: int to find abs of
 *Retrun: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
