#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints out x amount of bytes from itself
 *@argc: number of args
 *@argv: the argument array
 *Return: 0 alwayse
 */


int main(int argc, char **argv)
{
	int s, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("Error\n");
		return (2);
	}
	s = atoi(argv[1]);
	for (i = 0 ; i <= s ; i++)
	{
		printf("%c\n", *main());
	}
	return (0);
}
