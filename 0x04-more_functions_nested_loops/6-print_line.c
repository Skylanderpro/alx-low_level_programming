#include "main.h"

/**
 *print_line - prints _ n times in terminal
 *@n: number of times _ is printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
