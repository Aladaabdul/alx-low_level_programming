#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < s[i]; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else if (s[i] == c)
		{
			return ("null");
		}
	}
	return (s);
}
