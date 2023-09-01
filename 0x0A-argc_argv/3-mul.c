#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies the 2 args to main
 *@argc: the number of arguments to main
 *@argv: the string storing the arguments
 *Return: 0 for success or 1 for Error
 */
int main(int argc, char *argv[])
{
	int i, j, prod = 0;

	if (!(argc == 3))
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	prod = i * j;

	printf("%d\n", prod);

	return (0);
}
