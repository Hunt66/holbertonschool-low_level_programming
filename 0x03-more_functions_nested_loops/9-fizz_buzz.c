#include "holberton.h"
# include <stdio.h>

/**
 *main - accepts void prints 1 to 100
 *       but if something is divisable by 3
 *       print fizz and buzz if 5 both
 *       if devisable by both
 *Return: 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
