#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int len_1;
	unsigned int len_2;
	unsigned int total_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_1 = strlen(s1);
	len_2 = strlen(s2);
	if (n >= len_2)
	{
		n = len_2;
	}
	total_len = len_1 + n + 1;
	pointer = malloc(total_len);
	if (pointer == NULL)
	{
		return (NULL);
	}
	strcpy(pointer, s1);
	strncat(pointer, s2, n);
	return (pointer);
}
