#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * main - Entry point  prints every lowercased letter of alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
