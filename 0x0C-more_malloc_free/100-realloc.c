#include "main.h"

/**
 * _realloc - Reallocates a memory block with a new size
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: Size of the previously allocated memory block
 * @new_size: New size for the memory block
 *
 * Return: A pointer to the reallocated memory block (Success)
 *         NULL if new_size is zero and ptr is not NULL (Free and return NULL)
 *         NULL if malloc fails to allocate memory for the new block (Free and
 *         return NULL)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, min_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	min_size = (old_size < new_size) ? old_size : new_size;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < min_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}

	free(ptr);

	return (new_ptr);
}
