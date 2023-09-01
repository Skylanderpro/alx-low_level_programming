#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins for change.
 * @argc: The number of arguments passed to main.
 * @argv: The array of strings containing arguments.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int cents, num_coins, coin_count, i;
	int coins[5] = {25, 10, 5, 2, 1};
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

	num_coins = sizeof(coins) / sizeof(coins[0]);
	coin_count = 0;

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);
	return (0);
}
