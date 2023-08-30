#include "main.h"
int sqrut(int b, int n);
/**
 *_sqrt_recursion - finds the sqrt of n
 *@n: the number whose square root is computed
 *Return: -1 if no natural sqrt or the sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrut(0,n)); 
}
/**
 *sqrut - helper to find sqrt by recursion
 *@b: the current guess
 *@n: the number whose sqrt is computed
 *Return: aquare root if found o.w -1
 */
int sqrut(int b, int n)
{
	if (b * b > n)
		return (-1);
	if (b * b == n)
		return (b);
	return (sqrut(b + 1, n));
}
