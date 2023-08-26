#include "main.h"
/**
 *_sqrt - finds square root of numbers
 *@n: number argument to find sqrt for
 *@root: the value to use for approximations
 *Return: natural square root or -1
 */
int _sqrt(int n, int root)
{
	if (root * root > n)
		return (-1); /*accounts for numbers without natural square root*/
	if (root * root == n)
		return (root); /*The square root is found*/
	return (_sqrt(n, root + 1));
}
/**
 *_sqrt_recursion - uses _sqrt to return square root of numbers
 *@n: the number whose sqrt is to be computed
 *Return: square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);/*There is no sqrt of -ve numbers*/
	return (_sqrt(n, 0));
}
