#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char small, q, e;

	q = 'q';
	e = 'e';

	for (small = 'a'; small <= 'z'; small++)
	{
	if (small != q && small != e)
	putchar(small);
	}
	putchar('\n');
	return (0);
}
