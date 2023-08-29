#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sums all the data
 * @head: Head
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
