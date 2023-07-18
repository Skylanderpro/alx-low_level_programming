#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
 *times_table - print 9 times table
 *
 */

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			if (prod < 10 && j != 0)
				_putchar(' ');
			if (prod < 10)
				_putchar(prod + '0');
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
