#include"holberton.h"

/**
 *_sqrt_recursion - gets the square root of an int using recursion
 *@n: number to get sqrt of
 *Return: sqrt of n
 */


int _sqrt_recursion(int n)
{
	int x = 1;

	return (_sqrt_help(x, n));

}

/**
 *_sqrt_help - helps _sqrt_recursion work
 *@x: sqrt test
 *@n: number testing for
 *Return: the square root of n
 */


int _sqrt_help(int x, int n)
{
	if ((x * x) - n == 0)
	{
		return (x);
	}
	if (x * x > n)
		return (-1);
	return (_sqrt_help(x + 1, n));
}
