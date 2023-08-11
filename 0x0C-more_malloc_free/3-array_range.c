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
	int total = max - min + 1;
	int *daniel;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	daniel = malloc(sizeof(int) * total);
	if (daniel == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		daniel[i] = min++;
	}
	return (daniel);
}
