#include"holberton.h"
#include <stdio.h>

/**
 *main - prints all arguments it recieves
 *@argc: number of arguments
 *@argv: the array of arguments
 *Return: 0 alwayse
 */

int main(int argc, char* argsv[])
{
	int i = 0;

	for ( ; i < argc ; i++)
	{
		printf("%s\n", argsv[i]);
	}
	return (0);
}
