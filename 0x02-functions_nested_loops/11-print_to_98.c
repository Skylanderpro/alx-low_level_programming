#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_to_98 - prints to 98
 *
 *@n: argument to print
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
