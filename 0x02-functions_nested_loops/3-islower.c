#include "main.h"
#include <ctype.h>

/**
 *_islower - checks for lowercase
 *
 *@c: is the argument to check
 *
 *Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
