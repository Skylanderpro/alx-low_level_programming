#include <stdio.h>

/**
 *main - prints fibonacci series
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int a = 1, b = 2, result, sum = 0;

	for (i = 0; i < 32; i++)
	{
		if (a % 2 == 0)
			sum += a;
		result = a + b;
		a = b;
		b = result;
	}
	printf("%ld\n", sum);
	return (0);
}
