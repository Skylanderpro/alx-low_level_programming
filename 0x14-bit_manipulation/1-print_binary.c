#include <stdio.h>
/**
 *print_binary - prints binary representation of a number
 *@n: number whose binary rep is printed
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, i;
	unsigned long int mask;

	for (i = bits - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		printf("%c", (n & mask) ? '1' : '0');
	}

	printf("\n");
}
