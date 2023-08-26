#include "main.h"

/**
 *main - returns the number of arguments to it
 *@argc: the number of arguments to main
 *@argv: the array to arguments to c
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
