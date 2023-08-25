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
	return (find_sqrt(n, n / 2));
}

/**
 *find_sqrt - second function that finds the squareroot using recursion
 *@n: the input number
 *@guess: the guess for the square root number
 *Return: the natural sqrt of n
 */

int find_sqrt(int n, int guess)
{
	int new_guess = (guess + n / guess) / 2;

	if (new_guess == guess || new_guess > n / new_guess)
		return (guess); /*the best approximation*/
	return (find_sqrt(n, new_guess));
}
