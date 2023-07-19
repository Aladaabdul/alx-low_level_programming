#include <stdio.h>
/**
 * main - print fibo numbers
 *@n: Formal parameter
 * Return: always 0
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, fib_next, i, n;

	printf("%d, %d, ", fib1, fib2);
	for (i = 2; i < n; i++)
	{
	fib_next = fib1 + fib2;
	printf("%d, ", fib_next);
	fib1 = fib2;
	fib2 = fib_next;
	}
	printf("\n");
	return (0);
}
