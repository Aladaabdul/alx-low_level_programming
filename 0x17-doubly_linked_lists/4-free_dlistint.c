#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: Head
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
