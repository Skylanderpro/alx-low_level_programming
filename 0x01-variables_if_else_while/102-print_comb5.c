#include <stdio.h>

/**
 *main - prints two two digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (l = j; l < 10; l++)
				{
					if (i != k || j != l)
					{
						putchar((i % 10) + '0');
						putchar((j % 10) + '0');
						putchar(' ');
						putchar((k % 10) + '0');
						putchar((l % 10) + '0');
						if (i != 9 || j != 8)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
		return (0);
}
