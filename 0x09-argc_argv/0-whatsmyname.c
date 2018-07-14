#include"holberton.h"
#include<stdio.h>

/**
 *main - prints out the name of the exicutable file
 *@argc: the number of arguments, not used
 *@argv: the array of arguments
 *Return: 0 alwayse
 */

int main(int argc, char* argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
