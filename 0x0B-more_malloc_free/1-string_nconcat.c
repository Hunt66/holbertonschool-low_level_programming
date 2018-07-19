#include"holberton.h"
#include<stdlib.h>
#include<stdio.h>


/**
 *string_nconcat - concatenates two strings
 *@s1: first string pointer
 *@s2: second string pointer
 *@n: the ammount from s2 to concatenate
 *Return: the concated strings pointer
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0 ; s1[a] != '\0' ; a++)
		;
	for (b = 0 ; s2[b] != '\0' ; b++)
		;

	if (n > b)
		n = b;

	out = (char *)malloc(a + n);
	if (out == NULL)
		return (NULL);

	for (b = 0; b < n + a ; b++)
	{
		if (b < a)
		{
			out[b] = s1[b];
		}
		else
		{
			out[b] = s2[b - a];
		}
	}
	out[b] = '\0';
	return (out);
}
