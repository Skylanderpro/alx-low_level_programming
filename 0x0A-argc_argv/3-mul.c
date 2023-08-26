#include "main.h"

/**
 *main - returns the number of arguments to it
 *@argc: the number of arguments to main
 *@argv: the array to arguments to c
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
