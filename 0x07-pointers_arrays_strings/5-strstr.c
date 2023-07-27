#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int j;
	int i;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (haystack[i + j] == needle[j])
		{
			return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
