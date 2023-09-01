#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main - adds arguments to it
 *@argc: the number of arguments to main
 *@argv: the string storing the arguments to main
 *
 *Return: 1 for error and 0 o.w
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
