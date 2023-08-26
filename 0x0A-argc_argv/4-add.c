#include "main.h"

/**
 *main - returns the number of arguments to it
 *@argc: the number of arguments to main
 *@argv: the array to arguments to c
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	i = 1;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		while (i < argc)
		{
			int j;

			j = 0;
			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
