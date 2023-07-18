#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_last_digit - find last digit of a number
 *
 *@n: the number argument
 *
 *Return: 0
 */

int print_last_digit(int n)
{
	int j;

	n = abs(n);
	j = n % 10;
	putchar(j + '0');
	return (j);
}
