#include"holberton.h"

/**
 *factorial - returns the factorial of a given int
 *@n: int to find factorial of
 *Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
