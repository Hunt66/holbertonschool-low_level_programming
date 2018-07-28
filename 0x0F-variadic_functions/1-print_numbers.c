#include"variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/**
 *print_numbers - prints all input numbers folled by \n
 *@separator: string to be printed in between numbers
 *@n: the number of arguments
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;


	va_start(list, n);

	if (separator != NULL)
	{
		for (i = 0 ; i < n - 1 ; i++)
		{
			printf("%d%s", va_arg(list, int), separator);
		}
	}
	else
	{
		for (i = 0 ; i < n - 1 ; i++)
		{
			printf("%d", va_arg(list, int));
		}
	}
	printf("%d\n", va_arg(list, int));

	va_end(list);
}
