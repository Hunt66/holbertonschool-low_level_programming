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
	char *str = "";


	va_start(list, format);


	while (format[i + 2] != '\0')
	{
		switch(format[i])
		{
		case 'c':
		{
			printf("c\n");
			printf("%c, ", (char)va_arg(list, int));
		}
		case 'i':
		{
			printf("i\n");
			printf("%d, ", va_arg(list, int));
		}
		case 'f':
		{
			printf("f\n");
			printf("%f, ", va_arg(list, double));
		}
		case 's':
		{
			printf("s\n");
			str = va_arg(list, char *);
			if (str == NULL)
			{
				printf("sn\n");
				printf("(nil), ");
				i++;
				continue;
			}
			printf("snn\n");
			printf("%s, ", (char *)va_arg(list, char *));
		}
		}
		i++;
	}
	switch(format[i])
	{
		printf("format[i]=%c\n", format[i]);
	case 'c':
	{
		printf("c2\n");
		printf("%c\n", (char)va_arg(list, int));
	}
	case 'i':
	{
		printf("i2\n");
		printf("%i\n", va_arg(list, int));
	}
	case 'f':
	{
		printf("i2\n");
		printf("%f\n", va_arg(list, double));
	}
	case 's':
	{
		printf("s2\n");
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("sn2\n");
			printf("(nil)\n");
			break;
		}
		printf("snn2\n");
		printf("%s\n", (char *)va_arg(list, char *));
	}
	}
}
