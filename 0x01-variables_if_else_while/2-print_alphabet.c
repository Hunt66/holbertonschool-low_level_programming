#include <stdio.h>

/**
 * main - Entry point  prints every lowercased letter of alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let;

	let = 'a';
	while (let < 'z')
	{
		putchar(let);
		let++;
	}
	putchar ('\n');

	return (0);
}
