#include "main.h"

/**
 *main - prints lowercase alphabets
 *
 *Return: void (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
