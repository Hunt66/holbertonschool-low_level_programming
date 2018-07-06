#include"holberton.h"

/**
 *_strcmp- compairs two strings and subtracts the added askii charicter values
 *@s1: first string pointer
 *@s2: the one to be subtracted
 *Return: int value of s1's askii minus s2's askii
 */

int _strcmp(char *s1, char *s2)
{
	int i, num1, num2;

	num1 = 0;
	num2 = 0;
	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != '\0')
		{
			if (s1[i] >= 'a' || s1[i] <= 'z')
				num1 = num1 + (s1[i] - '~');
			if (s1[i] >= 'A' || s1 [i] <= 'Z')
				num1 = num1 + (s1[i] - '~');
		}
		if (s2[i] != '\0')
		{
			if (s2[i] >= 'a' || s2[i] <= 'z')
				num2 = num2 + (s2[i] - '~');
			if (s2[i] >= 'A' || s2[i] <= 'Z')
				num2 = num2 + (s2[i] - '~');
		}
	}
	if (num1 - num2 < 0)
		return (num1 - num2 + 245);
	if (num1 - num2 > 0)
		return (num1 - num2 - 245);
	else
		return (0);
}
