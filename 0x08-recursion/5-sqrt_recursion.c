#include "main.h"

int find_sqrt(int n, int start, int end);
/**
 *_sqrt_recursion - returns the square root
 *@n: number whose sqrt is returned
 *
 *Return: the natural sqrt or -1 if not found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0, n / 2 + 1));
}

/**
 *find_sqrt - second function that finds the squareroot using recursion
 *@n: the input number
 *@start: the starting point for finding the sqrt
 *@end: the ending point for the search
 *Return: the natural sqrt of n
 */

int find_sqrt(int n, int start, int end)
{
	int mid;

	if (start > end)
		return (-1);
	mid = start + (end - start) / 2;

	if (mid * mid == n)
		return (mid); /*natural squareroot found*/
	if (mid * mid > n)
		return (find_sqrt(n, start, mid - 1)); /*searching in the lower half*/
	return (find_sqrt(n, mid + 1, end)); /* seaching in upper half*/
}
