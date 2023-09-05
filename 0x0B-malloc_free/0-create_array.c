#include "main.h"
/**
 *create_array - creates array using malloc
 *@size: array size
 *@c: values in array
 *Return: the array or NULL for errors
 */
char *create_array(unsigned int size, char c) {
	char *array;
	unsigned int i;

	if (size == 0) {
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL) {
		return (NULL);
	}

	for (i = 0; i < size; i++) {
		array[i] = c;
	}

	return (array);
}
