#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int j;
	char c;

	j = 0;
	while(j < 10)
	{
		for (c = 97; c <=122; c++)
		{
			_putchar(c);
			_putchar('\n');
		}
	}
}
