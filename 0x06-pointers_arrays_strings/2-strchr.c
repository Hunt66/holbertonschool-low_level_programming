#include "holberton.h"

/**
 *_strchr - function locates first instence of a charicter in a string
 *@s: accepted string pointer
 *@c: char function is looking for
 *Return: first occurence of c in s or NULL if none found
 */

char *_strchr(char *s, char c)
{

	for ( ; *s != '\0' ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == '\0')
		return (s);
	return ('\0');
}
