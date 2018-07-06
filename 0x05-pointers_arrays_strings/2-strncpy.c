#include"holberton.h"

/**
 * _strncpy- copies n chars from string src to string dest
 *@dest: the string copy destination
 *@src: the string to copy
 *@n: the amount of chars to be copied
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0 ; src[a] != '\0' ; a++)
		;
	b = n;
	if (n > a)
		b = a;
	for (a = 0 ; a < n ; a++)
	{
		if (a > b)
			dest[a] = ' ';
		else
			dest[a] = src[a];
	}
	return (dest);
}
