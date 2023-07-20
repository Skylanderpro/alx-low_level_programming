#include "main.h"

/**
 *main - checks for largest prime factor and prints result
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	long number = 612852475143;
	long i, largestFactor = 0;

	while (number % 2 == 0)
	{
		largestFactor = 2;
		number /= 2;
	}
	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largestFactor = i;
			number /= i;
		}
	}
	if (number > 2)
	{
		largestFactor = number;
	}

	printf("%ld\n", largestFactor);
	return (0);
}
