#include"holberton.h"
#include <stdio.h>

/**
 *main - prints all arguments it recieves
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
