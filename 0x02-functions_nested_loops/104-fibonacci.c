#include <stdio.h>

/**
 *main - prints fibonacci series
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int count;
	unsigned long fibo_0 = 0, fibo_1 = 1, sum;
	unsigned long fib_half_1, fib_half_2, fib1_half_1, fib1_half_2;
	unsigned long half, half1;

	for (count = 0; count < 92; count++)
	{
		sum = fibo_0 + fibo_1;
		printf("%lu, ", sum);
		fibo_0 = fibo_1;
		fibo_1 = sum;
	}
	fib_half_1 = fibo_0 / 10000000000;
	fib1_half_1 = fibo_1 / 10000000000;
	fib_half_2 = fibo_0 % 10000000000;
	fib1_half_2 = fibo_1 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		half = fib_half_1 + fib1_half_1;
		half1 = fib_half_2 + fib1_half_2;
		if (fib_half_2 + fib1_half_2 > 9999999999)
		{
			half += 1;
			half1 %= 10000000000;
		}
		printf("%lu%lu", half, half1);
		if (count != 98)
			printf(", ");
		fib_half_1 = fib1_half_1;
		fib_half_2 = fib1_half_2;
		fib1_half_1 = half;
		fib1_half_2 = half1;
	}
	printf("\n");
	return (0);
}
