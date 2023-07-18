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
		if (i != 49)
			printf("%ld, ", a);
		if (i == 49)
			printf("%ld\n", a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
