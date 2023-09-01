#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: The number of arguments to main.
 * @argv: The string storing the arguments to main.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num;
		char *endptr;

		num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
