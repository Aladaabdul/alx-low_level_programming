#include <stdio.h>
#include "main.h"
/**
 * get_bit - get bit of a given value
 * @n: Int
 * @index: n Index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
