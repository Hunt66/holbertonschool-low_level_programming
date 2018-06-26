# include <stdio.h>

/**
 * main- entry point accepts nothing
 *       returns 0
 *
 * print_alphabet_x10 - accepts void
 *                  returns 0
 *                  prints alphabet 10 times
 *
 * Return: alwayse 0
 *
 * does-prints lower alphabet 10 times
 */



int print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0;j <= 9; j++)
	{
		for (i = 'a';i <= 'z';i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
	return (0);
}








int main(void)
{
	print_alphabet_x10();
	return(0);
}
