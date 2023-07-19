#include <stdio.h>
/**
 * print_fibo - print fibo numbers
 *@n: Formal parameter
 * Return: always 0
 */
void print_fibo(int n)
{
	int fib1 = 1, fib2 = 2, fib_next, i;

	printf("%d, %d, ", fib1, fib2);
	for (i = 2; i < n; i++)
	{
	fib_next = fib1 + fib2;
	printf("%d, ", fib_next);
	fib1 = fib2;
	fib2 = fib_next;
	}
	printf("\n");
}
