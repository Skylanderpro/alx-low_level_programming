#include "main.h"

/**
 *_pow_recursion - returns x raised to the power of y
 *@x: the base
 *@y: the exponent
 *Return: x raised to y or -1 for errors
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 1)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
