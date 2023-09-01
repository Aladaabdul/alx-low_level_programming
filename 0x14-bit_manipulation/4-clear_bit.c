#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets value of a bit to 0
 * @n: Int
 * @index: bit index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~mask;
	return (1);
}
