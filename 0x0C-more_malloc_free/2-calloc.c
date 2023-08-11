#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array
 * @nmemb: Integer
 * @size: Size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	unsigned int point = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(point);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < point; i++)
	{
		array[i] = 0;
	}
	return (array);
}
