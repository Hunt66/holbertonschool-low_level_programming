#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 *  more headers goes there
 * THis program makes a randome number and prints weather
 * it is negitive, positive or zero
 * Main--takes void returns zero
 * betty style doc for function main goes there
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of");
	printf(" %d ", n);
	printf("is ");



	if (n % 10 > 5)
		printf("%d and is greater than 5\n", n % 10);
	else if (n % 10 == 0)
		printf("%d and is 0\n", n % 10);
	else
		printf("%d and is less than 6 and not 0\n", n % 10);
	return (0);
}
