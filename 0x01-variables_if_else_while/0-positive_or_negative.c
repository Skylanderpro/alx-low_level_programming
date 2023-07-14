#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - states if a number is positive or negative
 *
 *
 *Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
