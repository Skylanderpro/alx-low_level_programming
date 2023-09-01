#include <stdio.h>
/**
 *main - prints its name
 *@argc: the number of command line args to main
 *@argv[]: string to store all arguments to main
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}
