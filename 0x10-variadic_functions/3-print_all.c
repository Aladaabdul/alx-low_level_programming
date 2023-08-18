#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: Types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	const char *ptr = format;

	va_list args;
	char c;
	int num;
	float f;
	char *str;
	int printed;
	char *separator;

	va_start(args, format);

	separator = "";
	printed = 0;

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", separator, c);
		}
		else if (*ptr == 'i')
		{
			num = va_arg(args, int);
			printf("%s%d", separator, num);
		}
		else if (*ptr == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%s%f", separator, f);
		}
		else if (*ptr == 's')
		{
			str = va_arg(args, char*);
			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, str);
			}
		}
		separator = ",";
		printed = 1;
		ptr++;
	}
	if (printed)
	{
		printf("\n");
	}
	va_end(args);
}
