#include "main.h"
/**
 * _strpbrk -  function that searches a string for any byte
 * @s: string
 * @accept: string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	s++;
	}
	return ('\0');
}
