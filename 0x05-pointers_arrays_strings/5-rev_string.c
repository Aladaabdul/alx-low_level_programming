#include "main.h"
/**
 * rev_string - function that prints a string
 * @s: Formal parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char hold;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		hold = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = hold;
	}
}
