#include "main.h"
/**
 *_pow_recursion - returns x raised to y
 *@x: the number whose power is computed
 *@y: the power
 *Return: the factorial or -1 for error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
