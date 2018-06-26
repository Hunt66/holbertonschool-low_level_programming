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

	i = 0;

	for(b = 'a';b <= 'z';b++)
		for(a = 'A';a <= 'Z';a++)
		{
			if(c == b||c ==a)
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

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
