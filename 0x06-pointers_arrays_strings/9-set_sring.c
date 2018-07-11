#include"holberton.h"
#include<stdio.h>
/**
 *set_string - sets the value of a pointer to a char
 *@s: destination
 *@to: value to be pointed to
 *Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
