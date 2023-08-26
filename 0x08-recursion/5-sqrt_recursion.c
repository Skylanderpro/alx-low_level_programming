#include "main.h"

int sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 * Return: The natural square root of n, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1; /* Negative number doesn't have a natural square root.*/

	return sqrt_helper(n, 0, n);
}

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The input number.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 * Return: The natural square root of n.
 */
int sqrt_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
		return end; /*Return the closest floor value of the square root.*/

	mid = start + (end - start) / 2;
	square = mid * mid;

	if (square == n)
		return mid; /* Found the square root.*/

	if (square > n)
		return sqrt_helper(n, start, mid - 1); /* Search in the lower half.*/

	return sqrt_helper(n, mid + 1, end); /* Search in the upper half.*/
}
