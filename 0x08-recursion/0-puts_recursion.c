#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *@s: The input string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
