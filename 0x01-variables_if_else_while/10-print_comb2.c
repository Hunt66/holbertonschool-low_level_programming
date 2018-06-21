#include <stdio.h>

/**
 * main - Entry point  prints every lowercased letter of alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a;

	for (i = '0'; i <= '9'; i++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			putchar(i);
			putchar(a);
			putchar(',');
			putchar(' ');
		}
		if (i == '9')
			break;
	}
	putchar ('\n');

	return (0);
}
