#include "holberton.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int min = INT_MIN;
	int max = INT_MAX;

	print_number(98);
	_putchar('\n');
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	printf("%d\n", max);
	print_number(max);
	_putchar('\n');
	printf("%d\n", min);
	print_number(min);
	_putchar('\n');
	return (0);
}
