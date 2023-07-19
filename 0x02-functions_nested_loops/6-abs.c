#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @n: formal parameter
 * Return: 0
 */
int _abs(int n)
{
	int abs;

	if (n < 0)
	{
	abs = n * -1;
	return (abs);
	}
	else
	{
	return (n);
	}
}
