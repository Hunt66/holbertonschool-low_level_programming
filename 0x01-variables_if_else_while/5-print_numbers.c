#include <stdio.h>

/**
 * main - Entry point  prints every lowercased letter of alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int let;

	let = 0;
	while (let < 10)
	{
		printf("%d", let);
		let++;
	}
	putchar ('\n');
	return (0);
}
