#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * more headers goes there
 * THis program makes a randome number and prints weather
 * it is negitive, positive or zero
 *
 * takes void returns zero
 *
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes here */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negitive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}