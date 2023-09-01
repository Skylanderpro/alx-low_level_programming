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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int coin_count = 0;

	for (int i = 0; i < num_coins; i++)
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
