#include "holberton.h"
#include <stdlib.h>

/**
 *strtow - splits words in a string into seperate strings
 *@str: input string
 *Return: a pointer to an array of individual word strings
 */


char **strtow(char *str)
{
	int i, j, k, count;
	char **out;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	count = 1;
	k = 0;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == ' ')
		{
			for ( ; str[i] == ' ' ; i++)
				;
			count = count + 1;
		}
	}
	out = (char **)malloc((count + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	for (i = 0 ; i <= count ; i++)
	{
		for (j = 0 ; str[k] != ' ' ; j++)
		{
			out[i] = (char * )malloc((k + 1) * sizeof(char));
			if (out[i] == NULL)
			{
				for (k = 0 ; k <= i - 1 ; k++)
				{
					free(out[k]);
				}
				free(out);
				return (NULL);
			}
		}
		for (j = 0 ; str[k] != ' ' ; j++)
		{
			out[i][j] = str[k];
			k++;
		}
		k++;
		out[i][j] = '\0';
	}
	out[i] = NULL;
	return (out);
}
