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
	int i;

	i = 0;
	for(b = 'a';b <= 'z';b++)
	{
		if(c == b)
		{
			i = 1;
			break;
		}
	}
	return(i);
}








int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
