#include "main.h"
/**
 * _sqrt_recursion - returns natural square root
 * @n: Integer
 * @i: interger
 * Return: 0
 */
int actual_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find natural number square
 * @n: number
 * @i: iterator
 * Return: square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n || i * i < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
