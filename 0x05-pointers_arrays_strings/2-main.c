#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *p;
	int i;

	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	printf("%s\n", s1);
	p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 0);
	printf("%s\n", s1);
	printf("%s\n", p);
	p = _strncpy(s1, "First, solve the problem. Then, write the code\n", -1);
	printf("%s", s1);
	printf("%s", p);
	for (i = 0; i < 98; i++)
	{
	if (i % 10)
        {
		printf(" ");
        }
        if (!(i % 10) && i)
        {
		printf("\n");
        }
        printf("0x%02x", s1[i]);
	}
	printf("\n");
	p = _strncpy(s1, "12345678901112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100", 150);
	printf("%s", s1);
	printf("%s", p);
	return (0);
}
