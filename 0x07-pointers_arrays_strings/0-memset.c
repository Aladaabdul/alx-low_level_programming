#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: character
 * @b: byte
 * @n: number of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n && s[i] != '\0')
	{
		s[i] = b;
		i++;
	}
	return (s);
}
