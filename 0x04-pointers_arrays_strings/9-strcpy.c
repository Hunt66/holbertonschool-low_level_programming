#include"holberton.h"

/**
 * *_strcpy - copies what is in a string pointer to another pointer
 *@dest: destination of copy
 *@src: pointer to string that is copied
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
