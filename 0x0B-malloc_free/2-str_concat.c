#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	size_t len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = strlen(s1) + strlen(s2) + 1;

	new = malloc(len);

	if (new == NULL)
	{
		return (NULL);
	}
	strcpy(new, s1);
	strcat(new, s2);
	return (new);
}
