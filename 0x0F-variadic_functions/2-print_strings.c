#include"variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/**
 *print_strings - prints all input strings folled by \n
 *@separator: string to be printed in between numbers
 *@n: the number of arguments
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str = "";


	va_start(list, n);

	if (separator != NULL)
	{
		for (i = 0 ; i < n; i++)
		{
			str = va_arg(list, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", str);
		}
		printf("%s", separator);
	}
	else /*this is if NULL for separator*/
	{
		for (i = 0 ; i < n ; i++)
		{
			str = va_arg(list, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	printf("\n");

	va_end(list);
}
