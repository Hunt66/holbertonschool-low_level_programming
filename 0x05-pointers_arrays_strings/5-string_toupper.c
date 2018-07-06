#include"holberton.h"

/**
 *string_toupper- changes all lower cased letters in string to uppercase
 *@str: string to be uppered
 *Return: the string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a') + 'A';
	return (str);
}
