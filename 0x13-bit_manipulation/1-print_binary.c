#include "holberton.h"



/**
 *print_binary- prints a binary representation of base 10 number
 *@n: unsigned long int to be converted
 *Return: void
 */





void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
