#include "main.h"
/**
 *malloc_checked - allocates memory using malloc
 *@b: the value to allocate memory for
 *Return: 98 for error and pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{	
		exit(98); /*Terminate the process with status value 98*/
	}

	return (ptr);
}
