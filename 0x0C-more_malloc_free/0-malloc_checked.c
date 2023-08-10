#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(sizeof(new) * b);
	if (new == NULL)
	{
		exit(98);
		return (0);
	}
	return (new);
}
