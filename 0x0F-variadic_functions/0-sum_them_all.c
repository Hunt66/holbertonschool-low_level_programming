#include"variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/**
 *sum_them_all - returns the sum of all arguments
 *@n: constent
 *Return: all args added unless n==0 then 0
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if(n == 0)
		return (0);

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
