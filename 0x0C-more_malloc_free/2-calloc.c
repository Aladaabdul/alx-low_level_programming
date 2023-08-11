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
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
