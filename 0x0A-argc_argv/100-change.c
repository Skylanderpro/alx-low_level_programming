#include "main.h"
/**
 *main - number of cents calculator for change
 *@argc: number of arguments to main
 *@argv: stores the values in main
 *Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, cents, num_coins, count;
	int coins[] = {25, 10, 5, 2, 1};

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
	count = 0;

	for (i = 0; i < num_coins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];				
	}

	printf("%d\n", count);

	return (0);
}
