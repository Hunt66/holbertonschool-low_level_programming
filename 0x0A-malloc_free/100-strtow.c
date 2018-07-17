#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *strtow - splits words in a string into seperate strings
 *@str: input string
 *Return: a pointer to an array of individual word strings
 */


char **strtow(char *str)
{
	int i, j, k, count, r;
	char **out;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	count = 0;
	k = 0;
	r = 0;
	if (str[0] != ' ')
		count++;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == ' ')
		{
			for (i = i ; str[i] == ' ' ; i++)
			{
				if (str[i] == '\0')
				{
					r = 1;
					break;
				}
			}
			if (r == 1)
				break;
			i--;
			count = count + 1;
		}
	}
	out = (char **)malloc((count + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	for (i = 0 ; i <= count ; i++)
	{
		if (str[k] == ' ')
		{
			i--;
			k++;
			continue;
		}
		for (j = 0 ; str[k + j] != ' ' && str[k + j] != '\0' ; j++)
		{
			;
		}
		out[i] = (char *)malloc((j + 1) * sizeof(char));
		if (out[i] == NULL)
		{
			for (j = 0 ; j <= i ; j++)
			{
				free(out[j]);
			}
			free(out);
			return (NULL);
		}
		for (j = 0 ; str[k] != ' ' && str[k] != '\0' ; j++)
		{
			out[i][j] = str[k];
			k++;
		}
		out[i][j] = '\0';
	}
	out[i] = NULL;
	return(out);
}
