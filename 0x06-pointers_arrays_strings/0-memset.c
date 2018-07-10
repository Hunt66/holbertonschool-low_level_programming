#include "holberton.h"

/**
 *_memset - function fills memory with a constant byte
 *@n: unsigned int fill limit
 *@s: memory to be altered pointed to by this
 *@b: teh byte function is to fill with
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i <= n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
