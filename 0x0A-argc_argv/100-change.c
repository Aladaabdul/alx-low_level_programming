#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main Entry
 * @argc: arg count
 * @argv: arg var
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, cents, coin_count;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin_count = 0;
	for (i = 0; i < num_coins; i++)
	{
		coin_count += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", coin_count);
	return (0);
}
