#include <stdio.h>
/**
 *get_bit - returns a bit at a given point
 *@n: number to extract bit from
 *@index: the position to extract a bit
 *
 *Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits = sizeof(n) * 8;

	if (index >= bits)
		return (-1);

	unsigned long int mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
