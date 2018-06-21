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
	int b;

	for (i = '0'; i <= '9'; i++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			for (b = '0'; b <= '9'; b++)
			{
				if (i < a && i < b && a < b)
				{
					putchar(i);
					putchar(a);
					putchar(b);
				}
				if (i == '7' && a == '8' && b == '9')
					break;
				if (i < a && a < b)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
