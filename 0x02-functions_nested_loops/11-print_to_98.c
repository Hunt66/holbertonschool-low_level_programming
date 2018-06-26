# include "holberton.h"
# include <stdio.h>

/**
 * print_to_98 - accepts one int
 *               returns void
 *               prints all natural nums
 *               on the way to 98 starting with n
 * @n: first input int
 *
 *
 * Return: alwayse added ints
 *
 */



void print_to_98(int n)
{
	int a;



	if (n < 98)
	{
		for (a = n ; a <= 98 ; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (a = n ; a >= 98 ; a--)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	else
		printf("98");
	putchar('\n');
}
