#include "main.h"
/**
 *_strlen_recursion - gets the string length
 *@s: the string to print
 *Return: lenght of the string or 0 for error
 */
int _strlen_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
