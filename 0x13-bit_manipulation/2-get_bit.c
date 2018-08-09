#include "holberton.h"


/**
 *get_bit- returns value of a bit at a given index
 *@n: the input number
 *@index: the given index
 *Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	for (i = 0 ; i < index ; i++)
	{
		if (n >> 1 == 0)
			return (-1);
		n = n >> 1;
	}
	return (n & 1);
}
