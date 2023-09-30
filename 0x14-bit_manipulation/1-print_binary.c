#include <stdio.h>
/**
 *print_binary - prints binary representation of a number
 *@n: number whose binary rep is printed
 */
void print_binary(unsigned long int n)
{
	int leading_zero = 1, bits = sizeof(n) * 8, i;
	unsigned long int mask;
	char bit;

	for (i = bits - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		bit = (n & mask) ? '1' : '0';

		if (bit == '1')
			leading_zero = 0;

		if (!leading_zero)
			printf("%c", bit);
	}

	if (leading_zero)
		printf("0");
}
