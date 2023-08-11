#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: 0
 */
int *array_range(int min, int max)
{
	int total = max - min;
	int *daniel;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	daniel = malloc(sizeof(int) * total + 1);
	if (daniel == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= total; i++)
	{
		daniel[i] = min + i;
	}
	return (daniel);
}
