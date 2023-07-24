#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: Formal parameter
 * @b: Formal parameter
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
