#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: Member
 * @*: Member
 * @f: Member
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
