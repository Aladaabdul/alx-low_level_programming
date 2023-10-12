#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - Main enty
 * @h: Head
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
