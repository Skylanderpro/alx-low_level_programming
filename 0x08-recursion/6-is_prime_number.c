/**
 * is_divisible_recursive - Checks if n is divisible by
 * any number from start to end using recursion.
 * @n: The number to check.
 * @divisor: The current divisor being checked.
 * @end: The ending number for divisibility check.
 *
 * Return: 1 if n is divisible, 0 otherwise.
 */
int is_divisible_recursive(int n, int divisor, int end)
{
	if (divisor > end)
		return (0);

	if (n % divisor == 0)
		return (1);

	return (is_divisible_recursive(n, divisor + 1, end));
}

/**
 * is_prime_number_recursive - Checks if a number is prime using recursion.
 * @n: The number to check.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number_recursive(int n, int divisor)
{
	divisor = divisor;
	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	if (is_divisible_recursive(n, 5, n / 2))
		return (0);

	return (1);
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_number_recursive(n, 2));
}
