#include <stdio.h>

/**
 *main - prints fibonacci series
 *
 *Return: Always 0 (success)
 */
int fibo(int n)
{
	if (n <= 1)
		return n;
	return fibo(n-1) + fibo(n-2);
}
int main(void)
{
	int n = 50;

	for (int i = 0; i < n; i++)
		printf("%d, ", fibo(i));

	return (0);
}
