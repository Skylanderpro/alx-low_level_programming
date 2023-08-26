#include "main.h"
/**
 *is_prime_number - checks for prime numbers
 *@n: the number input
 *Return: 1 for prime and 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0); /*0 and 1 are not prime numbers*/
	if (n <= 3)
		return (1); /* both 2 and 3 are prime numbers*/
	if (n % 2 == 0 || n % 3 == 0)
		return (0); /*numbers divisible by 2 and 3 are not prime*/
	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}
	return (1);
}
