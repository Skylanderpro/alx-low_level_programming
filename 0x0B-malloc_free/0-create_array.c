#include "main.h"

/**
 *create_array - creates an array of chars initializing with a specific char
 *@size: the array size
 *@c: char to initialize with
 *
 *Return: NULL if size = 0 and pointer to array or NULL for failed
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (NULL);


	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
