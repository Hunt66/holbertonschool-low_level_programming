# include <stdio.h>

/**
 * main - list all natural nums
 *        below 1024 that are multiples of
 *        3 or 5 and print sum of said multiples
 *
 * Return: alwayse 0
 *
 * does-
 */



int main(void)
{
	int a, b;

	b = 0;
	for (a = 1 ; a < 1024 ; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
