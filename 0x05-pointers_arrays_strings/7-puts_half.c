#include "main.h"

/**
 *puts_half - prints half a string
 *
 *@str: the string to print
 */

void puts_half(char *str)
{
	int n, j, lon;

	lon = 0;

	for (n = 0; str[n] != '\0'; n++)
		lon++;
	j = (lon / 2);

	if ((lon % 2) == 1)
		j = ((lon + 1) / 2);
	for (n = j; str[n] != '\0'; n++)
		putchar(str[n]);
	putchar('\n');
}
