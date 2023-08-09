#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac: arg count
 * @av: arg var
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *result;
	int total_length;
	int position;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	result = malloc(total_length + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	position = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}
	result[total_length] = '\0';
	return (result);
}
