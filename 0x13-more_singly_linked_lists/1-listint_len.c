#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: Head
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
