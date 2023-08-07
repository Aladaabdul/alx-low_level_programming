#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Main Entry
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(strlen(str) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	strcpy(new, str);
	return (new);
}
