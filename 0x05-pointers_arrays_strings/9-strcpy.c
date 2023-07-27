#include "main.h"
/**
 * _strcpy - function that copy string
 * @dest: destination value
 * @src: source value
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = ('\0');
	return (dest);
}
