#include <stdio.h>
/**
 *print_binary - prints binary representation of a number
 *@n: number whose binary rep is printed
 */
void print_binary(unsigned long int n)
{
	int i, bits = sizeof(n) * 8;
	int leading_zero = 1;
	unsigned long int mask = 1UL << (bits - 1);
	char bit;

	for (i = 0; i < bits; i++)
	{
		bit = (n & mask) ? '1' : '0';

		if (bit == '1')
			leading_zero = 0;

		if (!leading_zero)
			putchar(bit);

		mask >>= 1;
	}

	if (leading_zero)
		putchar('0');

}
