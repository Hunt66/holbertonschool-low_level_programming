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


	while (format[i] != '\0' && format)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					      format[i] == 'i' ||
					      format[i] == 'f' ||
					      format[i] == 's'))
			{
			printf(", ");
			}
		i++;
	}
	printf("\n");
	va_end(list);
}
