#include "holberton.h"


/**
 *set_bit- sets the value of a bit to 1 at a given index
 *@n: number to be manipulated
 *@index: the index we need to change the bit at
 *Return: 1 if worked -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(n) * 8)
		return (-1);


	*n = *n | 1 << index;
	return (1);
}
