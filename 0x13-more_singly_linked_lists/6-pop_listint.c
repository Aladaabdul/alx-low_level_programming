#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pop head node
 * @head: Head
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return ((*head)->n);
}
