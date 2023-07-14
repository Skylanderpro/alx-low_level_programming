#include <stdio.h>

/**
 *main - lowercase in reverse
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
