#include <stdio.h>
/**
 *main - prints number of arguments to main
 *@argc: number of arguments to main
 *@argv: array storing arguments to main
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name itself*/
	return 0;
}

