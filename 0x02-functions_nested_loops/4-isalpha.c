# include "holberton.h"

/**
 * _isalpha - accepts char
 *                  returns 0 or 1
 *                  0 if not alphabet
 *                  1 if part of alphabet
 * @c: int took for checking
 *
 * Return: alwayse 0
 *
 * does-tests weather H,0,o,108,and \n in alphabet
 */



int _isalpha(int c)
{
	int b;
	int a;
	int i;

	i = 0;
	for (b = 'a' ; b <= 'z' ; b++)
		for (a = 'A' ; a <= 'Z' ; a++)
		{
			if (c == b || c ==a)
			{
				i = 1;
				break;
			}
		}
	return (i);
}
