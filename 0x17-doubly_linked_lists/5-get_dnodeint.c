#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - return list index
 * @head: Head
 * @index: Interger
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head->next = head;
		i++;
	}
	return (NULL);
}
