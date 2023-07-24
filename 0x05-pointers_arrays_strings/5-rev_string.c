#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int coun = 0;
	int j;

	while (s[coun] != '\0')
		coun++;
	for (j = 0; j < coun; j++)
	{
		coun--;
		reverse = s[j];
		s[i] = s[coun];
		s[coun] = reverse;
	}
}
