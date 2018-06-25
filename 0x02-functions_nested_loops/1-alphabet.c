# include <stdio.h>

/**
 * main- entry point accepts nothing
 *       returns 0
 *
 * print_alphabet - accepts void
 *                  returns 0
 *                  prints alphabet
 *
 * Return: alwayse 0
 *
 * does-prints lower alphabet
 */



int print_alphabet(void)
{
	int i;

	for (i = 'a';i <= 'z';i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}








int main(void)
{
	print_alphabet();
	return(0);
}
