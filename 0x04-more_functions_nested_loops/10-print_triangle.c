#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: formal parameter
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= i; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
