#include <stdio.h>

/**
 *main - prints natural numbers
 *
 *Return: 0 for success
 */

int main(void)
{
	int h, sum;

	while (h < 1024)
	{
		if ((h % 3 == 0) || (h % 5 == 0))
			sum += h;
		h++;
	}
	printf("%d\n", sum);
	return (0);
}
