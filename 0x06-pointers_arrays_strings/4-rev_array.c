#include "main.h"
/**
 * reverse_array - reverses content of a string
 * @a: array
 * @n: array size
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n-1; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
