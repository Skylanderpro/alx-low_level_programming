#include <stdio.h>

/**
 *main - prints fibonacci series
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int a = 1, b = 2, result;

	for (i = 0; i < 50; i++)
	{
		printf("%ld, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
