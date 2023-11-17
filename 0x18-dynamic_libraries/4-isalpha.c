#include "main.h"
#include <ctype.h>

/**
 *_isalpha - return 1 for isalpha
 *
 *@c: argument to test
 *
 * Return: 1 for isalpha and 0 o.w
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
