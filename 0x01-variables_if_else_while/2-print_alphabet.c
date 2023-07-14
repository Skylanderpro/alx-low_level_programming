#include <stdio.h>

/**
 * main - prints lowercase alphabets
 *
 *Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
