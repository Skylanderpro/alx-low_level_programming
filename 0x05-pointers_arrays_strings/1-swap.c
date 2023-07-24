#include "main.h"

/**
 *swap_int - swaps integers
 *@a: argument
 *@b: argument
 */
void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}

