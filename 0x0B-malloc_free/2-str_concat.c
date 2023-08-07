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
	size_t s1_len;
	size_t s2_len;
	size_t len;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	s1_len = (s1 != NULL) ? strlen(s1) : 0;
	s2_len = (s2 != NULL) ? strlen(s2) : 0;
	len = s1_len + s2_len + 1;

	new = malloc(len);

	if (new == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(new, s1);
	}
	if (s2 != NULL)
	{
		strcat(new, s2);
	}
	return (new);
}
