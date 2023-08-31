#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets value of a bit
 * @n: Int
 * @index: Index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= mask;
	return (1);
}
