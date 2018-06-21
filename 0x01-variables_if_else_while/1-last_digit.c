#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
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

	printf("Last digit of %d is ", n);
	int l = n % 10;

	printf(l);
	if (l > 5)
		printf(" and is greater than 5\n");
	else if (l == 0)
		printf(" and is 0\n");
	else if (l < 6)
		printf(" and is less than 6 and not 0\n");
	return (0);
}
