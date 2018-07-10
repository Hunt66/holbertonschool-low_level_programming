#include "holberton.h"

/**
 *_strstr - locates the first instence of a substring in a string
 *@haystack: string to be searched
 *@needle: substring to find
 *Return: pointer to beginning of located substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, rt;

	rt = 0;
	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0 ; needle[j] != '\0' ; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				rt = 1;
			}
		}
		if (rt == 1)
			break;
	}
	if (rt == 1)
	{
		haystack = haystack + i;
		return (haystack);
	}
	else
		return ('\0');
}
