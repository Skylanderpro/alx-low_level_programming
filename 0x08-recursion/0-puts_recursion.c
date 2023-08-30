#include "main.h"
/**
 *_puts_recursion - prints a string using recursion
 *@s: the string to print
 */
void _puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
