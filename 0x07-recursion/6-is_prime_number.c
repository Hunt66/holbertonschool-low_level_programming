#include"holberton.h"

/**
 *is_prime_number - returns 1 if prime and 0 if not
 *@n: accepted int to check if prime
 *Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (prime_number(n, i));
}
/**
 *prime_number - checks if prime
 *@n: is this a prime number
 *@i: incramenting tester
 *Return: 1 if prime 0 if not
 */


int prime_number(int n, int i)
{
	if ((n % i) == 0)
		return (0);
	if (i >= n / 2)
		return (1);
	i++;
	return (prime_number(n, i));
}
