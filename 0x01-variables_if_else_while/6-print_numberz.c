#include <stdio.h>

/**
 * main - prints numbers not using printf
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar('\n');
	return (0);
}
