#include"holberton.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: pointer to string to be searching
 *@accept: pointer to string of chars to be searched for
 *Return: pointer to bytes in s that match or NULL if no matching bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, t;

	t = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				t = 1;
				break;
			}
		}
		if (t == 1)
			break;
	}
	if (t == 0)
		return ('\0');
	return (s);
}
