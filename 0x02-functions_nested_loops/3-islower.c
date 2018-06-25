# include <stdio.h>

/**
 * main- entry point accepts nothing
 *       returns 0
 *
 * _islower - accepts char
 *                  returns 0 or 1
 *                  0 if not lower
 *                  1 if lower
 *
 * Return: alwayse 0
 *
 * does-tests weather H,0,o,108,and \n are lower
 */



int _islower(int c)
{
	int b;
	for(b = 'a';b <= 'z';b++)
	{
		if(c == b)
			return (0);
		else
			return (1);
	}
}








int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
