#include "main.h"

int prime_finder(int b, int k);

/**
 * is_prime_number - determines if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 o.w
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_finder(n, n - 1));
}

/**
 * prime_finder - calculates if a number is prime recursively
 * @b: number to check if prime or not
 * @k: value for iteration
 *
 * Return: 1 if n is prime, 0 0.w
 */
int prime_finder(int b, int k)
{
	if (b == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (actual_prime(b, k - 1));
}
