#include <stdio.h>

/**
 * main - print base 16
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
