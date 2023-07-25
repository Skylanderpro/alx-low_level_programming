#include "main.h"

/**
 *puts2 - print characters
 *@str: string for character print
 */

void puts2(char *str)
{
	int lon = 0;
	int h = 0;
	char *j = str;
	int o;

	while (*j != '\0')
	{
		j++;
		lon++;
	}
	h = lon - 1;
	for (o = 0; o <= h; o++)
	{
		if (o % 2 == 0)
			putchar(str[0]);
	}
	putchar('\n');
}
