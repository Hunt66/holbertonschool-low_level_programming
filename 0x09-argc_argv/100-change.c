#include"holberton.h"
#include<stdio.h>
#include<stdlib.h>


/**
 *main - print the minimum number of coin to make change for an amount fo money
 *       if argument is negative print 0 Error if wrong num of args only
 *       standard coins 25 10 5 2 1
 *Return: 0 or if wrong number of arguments retrun 1
 */

int main(int argc, char* arcv[])
{
	int input = 0;
	int ans = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	input = atoi (arcv[1]);
	if (input < 0)
	{
		printf("0\n");
		return (0);
	}
	if (input / 25 > 0)
	{
		ans = input / 25;
		input = input % 25;
	}
	if ((input / 10) > 0)
	{
		ans = ans + (input / 10);
		input = input % 10;
	}
	if ((input / 5) > 0)
	{
		ans = ans + (input / 5);
		input = input % 5;
	}
	if ((input / 2) > 0)
	{
		ans = ans + (input / 2);
		input = input % 2;
	}
	ans = ans + input;
	printf("%d\n", ans);
	return (0);
}
