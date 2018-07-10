#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "worldsssss";
	char *f = "";
	char *t;

	t = _strstr(s, f);
	  printf("%s\n", t);
	t = strstr(s, f);
	printf("%s\n", t);
	return (0);
}
