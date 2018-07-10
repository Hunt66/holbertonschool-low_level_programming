#include"holberton.h"

/**
 *_memcpy - function copies memory area
 *@dest: destination of copy
 *@src: the sorce to be copied
 *@n: unsingned int limit of bytes of memory to be copied
 *Retrun: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i >= n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
