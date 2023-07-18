#include "main.h"
#include <stdio.h>

/**
 *print_times_table - prints mult table of n
 *
 *@n: range of table
 */

void print_times_table(int n)
{
	int num, multip, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (multip = 1; multip <= n; multip++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * multip;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod % 100) / 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');

		}
	}
}
