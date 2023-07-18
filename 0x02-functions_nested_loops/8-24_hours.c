#include "main.h"

/**
 *jack_bauer - print minutes
 *
 */

void jack_bauer(void)
{
	int i, l;

	i = 0;
	while (i < 24)
	{
		for (l = 0; l < 60; l++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(58);
			_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
			_putchar('\n');
		}
		i++;
	}
}
