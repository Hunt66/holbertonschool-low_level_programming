#include<stdlib.h>
#include<stdio.h>
#include"3-calc.h"


/**
 *op_add- adds two numbers
 *@a: first number int
 *@b: second number int
 *Return: added ints
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two ints
 *@a: first number
 *@b: second number
 *Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two ints
 *@a: first numebr
 *@b: second number
 *Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - devides two ints
 *@a: first num
 *@b: second num
 *Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - finds modulo of two ints
 *@a: number
 *@b: modual of
 *Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
