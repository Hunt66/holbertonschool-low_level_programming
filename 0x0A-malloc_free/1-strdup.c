#include"holberton.h"
#include<stdlib.h>


/**
 *_strdup- allocates memory and puts input string in it
 *@str: the string that is put in the memory
 *Return: a pointer to the allocated space in memory
 */


char *_strdup(char *str)
{
	unsigned int i, size;
	char *out;

	if (!str)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		;
	size = i;
	out = (char *)malloc(sizeof(char + 1) * size);
	if (!out)
		return (NULL);
	for (i = 0 ; size > i ; i++)
	{
		out[i] = str[i];
	}
	out[i] = '\0';
	return (out);
}
