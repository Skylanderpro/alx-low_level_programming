#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory block to allocate
 *
 * Return: Pointer to the allocated memory (Success)
 *         Exits with status 98 if malloc fails (Failure)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
