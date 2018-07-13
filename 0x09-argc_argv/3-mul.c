#include"holberton.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *main - prints two numbers multiplyed
 *Return: 0 if recieves two arguments 1 if not
 */


int main(int argc, char* argv[])
{
	int numans = 0;
	int num1 = 0;
	int num2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	numans = num1 * num2;
	printf("%d\n", numans);
	return (0);
}
