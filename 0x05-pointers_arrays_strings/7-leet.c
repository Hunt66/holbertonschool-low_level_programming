#include"holberton.h"

/**
 *leet- encodes string into 1337 where a or A is 4, e or E is 3, o or O is 0
 *      t or T is 7, and l and L is 1
 *@str: accepted string pointer
 *Return: str string pointer
 */

char *leet(char *str)
{
	int i, x;
	char s[] = "4   3      1  0    7            4   3      1  0    7";

	x = 0;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (x = 0 ; s[x] != '\0'; x++)
		{
			if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' ||
			    str[i] == 'E' || str[i] == 'o' || str[i] == 'O' ||
			    str[i] == 't' || str[i] == 'T' || str[i] == 'l' ||
			    str[i] == 'L')
				str[i] = (s[(str[i] - 'A')]);
		}
	}
	return (str);
}
