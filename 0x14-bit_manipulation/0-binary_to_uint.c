#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_unit - converts a binary number
 * @b: Binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	int length = strlen(b);
	for (i = 0; i < length; i++)
	{
		if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		else if (b[i] == '0')
		{
			num = num << 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
