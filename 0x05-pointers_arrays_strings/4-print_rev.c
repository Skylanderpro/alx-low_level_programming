#include "main.h"

/**
 *print_rev - prints string in reverse
 *@s: string to print
 */

void print_rev(char *s)
{
	int h, l = 0;

	for (h =0; s[h] != '\0'; h++)
	{
		l++;
	}
	for (h = l - 1; h >= 0; h--)
	{
		putchar(s[h]);
	}
	putchar('\n');

}
