#include"holberton.h"

/**
 *_strlen_recursion - returns the length of an input string with recursion
 *@s: accepted string
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	s++;
	if (*s == '\0')
		return(1);
	else
	{
		return(_strlen_recursion(s) + 1);
	}
}
