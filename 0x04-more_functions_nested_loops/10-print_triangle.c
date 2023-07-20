#include "main.h"

/**
 *print_triangle - prints triangles
 *@size: triangle size
 */

void print_triangle(int size)
{
	int i, j, num;

	if (size <= 0)
		printf("\n");
	else
	{
		num = size;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= num || j == num - 1)
					printf("#");
				if (j < num - 1)
					printf(" ");
			}
			num--;
			printf("\n");
		}
	}
}
