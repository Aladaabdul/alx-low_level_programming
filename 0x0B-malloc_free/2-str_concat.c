#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *new;

	size_t len = strlen(s1) + strlen(s2) + 1;

	new = malloc(len);

	if (new == NULL)
	{
		return (NULL);
	}
	strcpy(new, s1);
	strcat(new, s2);
	return (new);
}
