#include "main.h"
/**
 *_sqrt_raphson - uses the Newton-Raphson method in approximating the square root of numbers
 *@n: the input number
 *@guess: the first approximation to the sqrt of n
 *Return: the natural square root of n
 */
int _sqrt_raphson( int n, int guess)
{
	int new_guess;

	new_guess = (guess + n / guess) / 2;

	if (new_guess == guess || new_guess > n / new_guess)
		return (guess); /*best approximation reached*/
	return (_sqrt_raphson(n, new_guess));
}
/**
 *_sqrt_recursion - Wrapper function for the Newton-Raphson square root calculation
 *@n: the input number
 *Return: the natural square root of n
 */
int _sqrt_newton(int n)
{
	if (n < 0)
		return (-1);/* Negative numbers don't have square roots.*/
	if (n == 0 || n == 1)
		return (n);/* Square root of 0 and 1 is itself*/
	return (_sqrt_raphson(n, n / 2)); /* start the approximation with the initial guess of n / 2*/
}
