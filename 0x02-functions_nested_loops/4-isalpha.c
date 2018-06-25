# include <stdio.h>

/**
 * main- entry point accepts nothing
 *       returns 0
 *
 * _isalpha - accepts char
 *                  returns 0 or 1
 *                  0 if not alphabet
 *                  1 if part of alphabet
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

	i = 1;

	for(b = 'a';b <= 'z';b++)
		for(a = 'A';a <= 'Z';a++)
		{
			if(c == b||c ==a)
			{
				i = 0;
				break;
			}

		}
	return(i);
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
