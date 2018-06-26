# include <stdio.h>

/**
 * _islower - accepts int c
 *                  returns 0 or 1
 *                  0 if not lower
 *                  1 if lower
 *
 * @c: an int that is accepted to be tested
 *
 *
 * Return: alwayse 0
 *
 * does-tests weather H,0,o,108,and \n are lower
 */



int _islower(int c)
{
	int b;
	int i;

	i = 0;
	for (b = 'a' ; b <= 'z' ; b++)
	{
		if (c == b)
		{
			i = 1;
			break;
		}
	}
	return (i);
}
