#include"variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>


/**
 *print_all - prints anything given to it
 *@format: list of argument types passed into function
 *Return: void
 */


void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char c;
	char *str = "";

	va_start(list, n);

	while (format[i + 1] != '\0')
	{
		switch(format[i])
		{
		case 'c':
		{
			printf("%c, ", va_arg(list, char));
		}
		case 'i':
		{
			printf("%i, ", va_arg(list, int));
		}
		case 'f':
		{
			printf("%f, ", va_arg(list, float));
		}
		case 's':
		{
			str = va_arg(list, char *);
			if (str == NULL)
			{
				printf("(nil), ");
				i++;
				continue;
			}
			printf("%s, ", va_arg(list, char *));
		}
		}
		i++;
		
