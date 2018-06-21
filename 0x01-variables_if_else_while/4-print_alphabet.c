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
	let--;
	while (let < 'z')
	{
		let++;
		if (let != 'q')
			if (let != 'e')
				putchar(let);
	}
	putchar ('\n');
	return (0);
}
