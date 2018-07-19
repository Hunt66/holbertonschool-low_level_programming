#include"holberton.h"
#include <stdlib.h>


/**
 *_bzero - fills with zero
 *@s1: string
 *@n: number
 *Return: void
 */


void _bzero(void *s1, unsigned int n)
{
	char *p;

	for (p = s1; n--;)
		*p++ = '\0';
}





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
	out = malloc((nmemb) * size);
	if (out == NULL)
		return (NULL);
	_bzero(out, size * nmemb);
	return (out);
}
