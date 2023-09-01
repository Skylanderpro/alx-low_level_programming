#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers.
 * @argc: The number of arguments to main.
 * @argv: The string storing the arguments to main.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]) || atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	for (j = 1; j < argc; j++)
	{
		k = atoi(argv[j]);
		sum += k;
	}

	printf("%d\n", sum);
	return (0);
}
