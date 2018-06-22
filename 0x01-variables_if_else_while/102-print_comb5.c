#include <stdio.h>

/**
 * main - Entry point  prints every lowercased letter of alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int a;
	int b;

	for (i = '0'; i <= '9'; i++)
	{
		for (j='0'; j <= '9'; j++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				for (b = '0'; b <= '9'; b++)
				{
					if (i > a && j < b)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(a);
						putchar(b);
					}
					if (j == '8' && b == '9' && i ==
					    '9' && a =='9')
						break;
					if (i < a && j < b)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
