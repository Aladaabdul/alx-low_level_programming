#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Main function
 * @array: Member
 * @size: Member
 * @action: Member
 * Return: 0/
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array || action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
