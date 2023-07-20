#include "main.h"

/**
 *print_diagonal - prints a diagonal in the terminal
 *@n: number of \ printed
 */

void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == i)
				{
					_putchar('\\');
				}
				else if (k < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
