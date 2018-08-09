#include "holberton.h"


/**
 *clear_bit- set a value of a bit to 0 at given index
 *@n: pointer to bit needing alteration
 *@index: index to change
 *Return: -1 if fails or 1 if works
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(n) * 8)
		return (-1);


	*n =  *n & ~(1 << index);
	return (1);
}
