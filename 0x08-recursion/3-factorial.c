#include "main.h"

/**
 * factorial - returns the factorial of a given number n
 * @n: the number whose factorial is computed
 *Return: The factorial of n or -1 for errors
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
