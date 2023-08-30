#include "main.h"
/**
 *factorial - returns the factorial of a number
 *@n: the number whose factorial is computed
 *Return: the factorial or -1 for error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
