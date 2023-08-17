#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: Member
 * @n: Integer
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int va;
	unsigned int i;

	if (n == 0)
	{
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		va = va_arg(list, int);
		printf("%d", va);
		if(i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
