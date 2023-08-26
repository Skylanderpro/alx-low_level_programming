#include "main.h"

/**
 *_isupper - checks for uppercase character
 *
 *@c: the character to check for
 *
 *Return: 1 for uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
