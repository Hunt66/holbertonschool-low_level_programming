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


	while (format[i + 1] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c, ", (char)va_arg(list, int));
			break;
		case 'i':
			printf("%d, ", va_arg(list, int));
			break;
		case 'f':
			printf("%f, ", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
			{
				printf("(nil), ");
				i++;
				break;
			}
			printf("%s, ", str);
			break;
		}
		i++;
	}
	switch(format[i])
	{
	case 'c':
		printf("%c\n", (char)va_arg(list, int));
		break;
	case 'i':
		printf("%i\n", va_arg(list, int));
		break;
	case 'f':
		printf("%f\n", va_arg(list, double));
		break;
	case 's':
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("(nil)\n");
			break;
		}
		printf("%s\n", str);
		break;
	}
}