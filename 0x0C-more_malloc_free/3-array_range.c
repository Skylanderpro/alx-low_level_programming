#include "main.h"

/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 *
 * Return: A pointer to the newly created array (Success)
 *         NULL if min > max or if malloc fails (Failure)
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
