#include <stdio.h>
/**
 *main - prints all arguments to it
 *@argc: number of cmd line arguments
 *@argv: the string storing the arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
