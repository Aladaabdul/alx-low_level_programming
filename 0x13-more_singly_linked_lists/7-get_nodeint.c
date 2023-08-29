#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return nth index
 * @head: Head
 * @index: Index
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
