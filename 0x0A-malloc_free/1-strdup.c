#include"holberton.h"
#include<stdlib.h>


/**
 *_strdup- allocates memory and puts input string in it
 *@str: the string that is put in the memory
 *Return: a pointer to the allocated space in memory
 */


char *_strdup(char *str)
{
	int i;
	char *out;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		;
	out = malloc(sizeof(char) * i);
	if (out == NULL)
		return (NULL);
	for (i = i - 1 ; i >= 0 ; i--)
	{
		out[i] = str[i];
	}
	return (out);
}
