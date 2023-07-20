#include "main.h"

/**
 *more_numbers - print 14 numbers 10 times
 */

void more_numbers(void)
{
	int;

	i = 0;

	while (i < 15)
	{
		if (i >= 10)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
