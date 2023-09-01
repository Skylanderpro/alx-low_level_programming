#include "main.h"

/**
 *_isdigit - checks for uppercase character
 *
 *@c: the character to check for
 *
 *Return: 1 for uppercase and 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
