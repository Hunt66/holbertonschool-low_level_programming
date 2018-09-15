#include"holberton.h"
#include<stdio.h>
/**
 *_strncmp- compairs two strings and subtracts the added askii charicter values
 *@s1: first string pointer
 *@s2: the one to be subtracted
 *Return: int value of s1's askii minus s2's askii
 */

int _strncmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' && s2 != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}
