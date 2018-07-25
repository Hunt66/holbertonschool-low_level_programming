#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 *main - A limited calculator that prints answere limited to ints and only uses
 *       -, +, /, *, or % as opperators
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 alwayse
 */


int main(int argc, char **argv)
{
	int a, b, ans = 0;

	if (argc != 4 || (argv[2][0] != '*' && argv[2][0] != '-' && argv[2][0]
			  != '+' && argv[2][0] != '%' && argv[2][0] != '/'))
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ans = ((get_op_func(argv[2]))(a,b));
	printf("%d\n", ans);
	return (0);
}
