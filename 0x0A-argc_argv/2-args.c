#include "main.h"

/**
 *main - returns the number of arguments to it
 *@argc: the number of arguments to main
 *@argv: the array to arguments to c
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
