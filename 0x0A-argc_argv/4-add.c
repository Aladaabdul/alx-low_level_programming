#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Main Entry
 * @argc: arg count
 * @argv: arg var
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
