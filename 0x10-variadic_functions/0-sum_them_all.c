#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of its parameters.
 * @n: Number of parameters
 *
 * Return: Sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

