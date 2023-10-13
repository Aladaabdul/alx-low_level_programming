#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - Return sum of list
 * @head: Head
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
