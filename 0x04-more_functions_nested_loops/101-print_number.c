#include <stdio.h>

/**
 *print_number - prints a number
 *@n: a number to print
 */
void print_number(int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	int reverse = 0;

	while (n != 0)
	{
		int digit = n % 10;

		reverse = reverse * 10 + digit;
		n /= 10;
	}

	while (reverse != 0)
	{
		int digit = reverse % 10;

		_putchar(digit + '0');
		reverse /= 10;
	}
}

