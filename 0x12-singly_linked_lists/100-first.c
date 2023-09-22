#include <stdio.h>

/**
 * print_message - Prints the specified message.
 *
 * This function is marked with __attribute__((constructor)),
 * ensuring it is executed before main.
 */

void print_message(void) __attribute__((constructor));

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
