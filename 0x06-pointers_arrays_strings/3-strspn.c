#include"holberton.h"

/**
 *_strspn - gets length of a prefix substring
 *@s: input string
 *@accept: pointer for what we are testing for
 *Retrun: number of bytes in s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, ct, t;

	t = 1;
	ct = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				ct++;
				t = 1;
				break;
			}
			t = 0;
		}
		if (t == 0)
			break;
	}
	return (ct);
}
