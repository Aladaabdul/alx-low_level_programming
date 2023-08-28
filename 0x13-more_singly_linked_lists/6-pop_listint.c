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
	int value;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		value = temp->n;
		free(temp);
		return (value);
	}
}
