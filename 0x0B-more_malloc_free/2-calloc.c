#include"holberton.h"
#include <stdlib.h>


/**
 *_calloc - alocates memory for an array using malloc
 *@nmemb: size of array
 *@size: size of data type
 *Return: void pointer to memeory allocated
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *out;

	if (size == 0 || nmemb == 0)
		return (NULL);
	out = malloc((nmemb + 1) * size);
	if (out == NULL)
		return (NULL);
	return (out);
}
