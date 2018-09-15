#include "holberton.h"

/**
 *abs - finds absolute value of int
 *@n: number to get abs from
 *Return: absolute value
 */

int abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
